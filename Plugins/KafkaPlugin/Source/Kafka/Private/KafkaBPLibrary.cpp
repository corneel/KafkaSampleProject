// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

#include "KafkaBPLibrary.h"
#include "Kafka.h"

UKafkaBPLibrary::UKafkaBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	OnKafkaMessageEvent.AddDynamic(this, &UKafkaBPLibrary::OnKafkaMessage);
	OnKafkaProduceMessageEvent.AddDynamic(this, &UKafkaBPLibrary::OnKafkaProduceEvent);
}

bool UKafkaBPLibrary::CreateKafkaConsumer(UKafkaDriver* KafkaDriver, TMap<FString, FString> ConfigurationSettings)
{
	if (!KafkaReady(KafkaDriver))
	{
		return false;
	}

	FString Err;
	if (!KafkaDriver->kafkaModule->ConsumerStart(ConfigurationSettings, Err))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}

	if (!KafkaDriver->kafkaModule->CreateConsumer(Err))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}

	return true;
}

bool UKafkaBPLibrary::CreateKafkaConsumerTopic(UKafkaDriver* KafkaDriver, FName Topic, TMap<FString, FString> ConfigurationSettings)
{
	if (!KafkaConsumerReady(KafkaDriver))
	{
		return false;
	}

	void* t = KafkaDriver->kafkaModule->GetTopic();
	KafkaDriver->kafkaModule->SetConsumerTopic(Topic, 0, ConfigurationSettings);

	return true;
}

void UKafkaBPLibrary::OnKafkaMessage_Implementation(const FString& Message, int ErrorCode, const EKafkaEventEnumType& LastKafkaEventEnum)
{
	UE_LOG(LogTemp, Warning, TEXT("OnKafkaConsumeError Event Triggered"));

}

bool UKafkaBPLibrary::KafkaConsumeMessageEvents(UKafkaDriver* KafkaDriver, bool AllMessages)
{
	if (!KafkaConsumerTopicReady(KafkaDriver))
	{
		return false;
	}

	FString Err = "";
	FString Str;

	if (AllMessages)
	{
		TArray<FString> MessageArray;
		if (KafkaDriver->kafkaModule->Consume(Err, MessageArray))
		{
			KafkaEventEnum = EKafkaEventEnumType::NOERROR;
			for (auto& message : MessageArray)
			{
				OnKafkaMessageEvent.Broadcast(message, KafkaDriver->kafkaModule->GetLastErrorCode(), KafkaEventEnum);				
			}
			return true;
		}
	}
	else
	{
		if (KafkaDriver->kafkaModule->Consume(Err, Str))
		{
			KafkaEventEnum = EKafkaEventEnumType::NOERROR;
			OnKafkaMessageEvent.Broadcast(Str, KafkaDriver->kafkaModule->GetLastErrorCode(), KafkaEventEnum);
			return true;
		}
	}

	int lastErrorCode = KafkaDriver->kafkaModule->GetLastErrorCode();
	//switch (static_cast<uint8>(KafkaDriver->kafkaModule->GetLastErrorCode()))

	KafkaEventEnum = MakeEnum(static_cast<uint8>(lastErrorCode));

	OnKafkaMessageEvent.Broadcast(Str, lastErrorCode, KafkaEventEnum);
	return false;
}

bool UKafkaBPLibrary::KafkaConsumeMessages(UKafkaDriver* KafkaDriver, TArray<FString>& MessageArray)
{
	if (!KafkaConsumerTopicReady(KafkaDriver))
	{
		return false;
	}
	
	FString Err = "";

	if (!KafkaDriver->kafkaModule->Consume(Err, MessageArray))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}

	return true;
}

bool UKafkaBPLibrary::KafkaConsumeMessage(UKafkaDriver* KafkaDriver, FString& Message)
{
	if (!KafkaConsumerTopicReady(KafkaDriver))
	{
		return false;
	}

	FString Err = "";

	if (!KafkaDriver->kafkaModule->Consume(Err, Message))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}

	return true;
}

bool UKafkaBPLibrary::KafkaConsumeAll(FName Topic, TMap<FString, FString> ConfigurationSettings, 
										TArray<FString>& MessageArray, FKafkaDriverErrorStructure& KafkaErrorStructure, int Timeout, int NumberOfRetries)
{
	ClearErrorStructure(KafkaErrorStructure);

	UKafkaDriver* KafkaDriver = NewObject<UKafkaDriver>(UKafkaDriver::StaticClass());
	
	if (!CreateKafkaConsumer(KafkaDriver, ConfigurationSettings))
	{
		MakePluginError(KafkaErrorStructure, EPluginErrorEnumType::NOKAFKACONSUMER);
		return false;
	}
	
	if (!CreateKafkaConsumerTopic(KafkaDriver, Topic, ConfigurationSettings))
	{
		MakePluginError(KafkaErrorStructure, EPluginErrorEnumType::NOKAFKACONSUMERTOPIC);
		return false;
	}
	FDateTime date1 = FDateTime::Now();
	FString Err;
	if (!KafkaDriver->kafkaModule->Consume(Err, MessageArray))
	{
		MakeDriverError(KafkaErrorStructure, KafkaDriver, "KafkaConsumeAll - KafkaConsumeMessages");
		return false;
	}
	/*if (!KafkaConsumeMessages(KafkaDriver, MessageArray))
	{
		MakeDriverError(KafkaErrorStructure, KafkaDriver, "KafkaConsumeAll - KafkaConsumeMessages");
		return false;
	}*/

	ElapsedSeconds(FTimespan(FDateTime::Now() - date1), KafkaErrorStructure.ElapsedTime, KafkaErrorStructure.TransactionRate, MessageArray.Num());
	
	//KafkaDriver->kafkaModule->ConsumerEnd();
	return true;
}

//TArray<FString> UKafkaBPLibrary::KafkaConsumeAll(FName topic, TMap<FString, FString> ConfigurationSettings)
//{
//	UKafkaDriver* KafkaDriver = NewObject<UKafkaDriver>(UKafkaDriver::StaticClass());
//	FString Err = "";
//	TArray<FString> StrArr;
//
//	if (!CreateKafkaConsumer(KafkaDriver, ConfigurationSettings))
//	{
//		return StrArr;
//	}
//
//	if (!CreateKafkaConsumerTopic(KafkaDriver, topic, ConfigurationSettings))
//	{
//		return StrArr;
//	}
//
//	KafkaConsumeMessages(KafkaDriver, StrArr);
//
//	KafkaDriver->kafkaModule->ConsumerEnd();
//
//	return StrArr;
//}

/*******************Produce****************/

bool UKafkaBPLibrary::KafkaProduceMessage(UKafkaDriver* KafkaDriver, FString message)
{
	if (!KafkaProducerTopicReady(KafkaDriver))
	{
		return false;
	}
	
	FString Err = "";
	if (!KafkaDriver->kafkaModule->Produce(message, Err, false))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}
	KafkaDriver->kafkaModule->commit(Err);
	return true;
}

bool UKafkaBPLibrary::KafkaProduceMessages(UKafkaDriver* KafkaDriver, TArray<FString> StrArr)
{
	if (!KafkaProducerTopicReady(KafkaDriver))
	{
		return false;
	}
	
	FString Err = "";
	if (!KafkaDriver->kafkaModule->Produce(StrArr, Err, false))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}
	KafkaDriver->kafkaModule->commit(Err);
	return true;
}

bool UKafkaBPLibrary::CreateKafkaProducer(UKafkaDriver* KafkaDriver, TMap<FString, FString> ConfigurationSettings)
{
	if (!KafkaReady(KafkaDriver))
	{
		return false;
	}

	FString Err = "";
	KafkaDriver->kafkaModule->ProducerStart(ConfigurationSettings, Err);

	if (!KafkaDriver->kafkaModule->CreateProducer(Err))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}
	return true;
}

bool UKafkaBPLibrary::CreateKafkaProducerTopic(UKafkaDriver* KafkaDriver, FName Topic, TMap<FString, FString> ConfigurationSettings)
{
	if (!KafkaProducerReady(KafkaDriver))
	{
		return false;
	}
	
	FString Err = "";
	if (!KafkaDriver->kafkaModule->CreateProducerTopic(ConfigurationSettings, Topic, Err))
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Err);
		return false;
	}

	return true;
}

void UKafkaBPLibrary::OnKafkaProduceEvent_Implementation(const FString& Message, int ErrorCode, const EKafkaEventEnumType& LastKafkaEventEnum)
{
	UE_LOG(LogTemp, Warning, TEXT("OnKafkaProduceEvent Event Triggered"));

}

bool UKafkaBPLibrary::KafkaProduceMessageEvents(UKafkaDriver* KafkaDriver, TArray<FString> MessageArray)
{
	if (!KafkaProducerTopicReady(KafkaDriver))
	{
		return false;
	}

	bool result = true;
	FString Err = "";
	int lastErrorCode = 0;

	for (auto& message : MessageArray)
	{
		KafkaEventEnum = EKafkaEventEnumType::NOERROR;
		result = KafkaDriver->kafkaModule->Produce(message, Err, false);	
		lastErrorCode = KafkaDriver->kafkaModule->GetLastErrorCode();

		switch (static_cast<uint8>(lastErrorCode))
		{
			case EKafkaEventEnumType::NOERROR:
				KafkaEventEnum = EKafkaEventEnumType::NOERROR;
				break;

			case EKafkaEventEnumType::TIMEDOUT:
				KafkaEventEnum = EKafkaEventEnumType::TIMEDOUT;
				break;

			case EKafkaEventEnumType::PARTITIONEOF:
				KafkaEventEnum = EKafkaEventEnumType::PARTITIONEOF;
				break;

			case EKafkaEventEnumType::UNKNOWNTOPIC:
				KafkaEventEnum = EKafkaEventEnumType::UNKNOWNTOPIC;
				break;

			case EKafkaEventEnumType::UNKNOWNPARTITION:
				KafkaEventEnum = EKafkaEventEnumType::UNKNOWNPARTITION;
				break;

			default:
				KafkaEventEnum = EKafkaEventEnumType::OTHERERROR;
				break;
		}

		OnKafkaProduceMessageEvent.Broadcast(message, lastErrorCode, KafkaEventEnum);

	}
	KafkaDriver->kafkaModule->commit(Err);

	return result;
}

void UKafkaBPLibrary::MakeDriverError(FKafkaDriverErrorStructure& KafkaErrorStructure, UKafkaDriver* KafkaDriver, FString ErrorPrefix)
{
	if (KafkaDriver)
	{
		KafkaErrorStructure.Errorcode = KafkaDriver->kafkaModule->GetLastErrorCode();
		KafkaErrorStructure.PluginErrorEnumType = EPluginErrorEnumType::DRIVERERROR;
		KafkaErrorStructure.KafkaEventEnumType = MakeEnum(KafkaErrorStructure.Errorcode);
		KafkaErrorStructure.ErrorMessage = ErrorPrefix + " : " + KafkaDriver->kafkaModule->GetLastErrorDescription();
		}
}

void UKafkaBPLibrary::MakePluginError(FKafkaDriverErrorStructure& KafkaErrorStructure, EPluginErrorEnumType PluginErrorEnumType)
{
	KafkaErrorStructure.Errorcode = 1000;
	KafkaErrorStructure.PluginErrorEnumType = PluginErrorEnumType;
	KafkaErrorStructure.KafkaEventEnumType = EKafkaEventEnumType::PLUGINERROR;
	KafkaErrorStructure.ErrorMessage = GetPluginErrorAsString(KafkaErrorStructure.PluginErrorEnumType);
}

void UKafkaBPLibrary::ClearErrorStructure(FKafkaDriverErrorStructure& KafkaErrorStructure)
{
	KafkaErrorStructure.Errorcode = 0;
	KafkaErrorStructure.ErrorMessage = "";
	KafkaErrorStructure.KafkaEventEnumType = EKafkaEventEnumType::NOERROR;
	KafkaErrorStructure.PluginErrorEnumType = EPluginErrorEnumType::NOERROR;
	KafkaErrorStructure.ElapsedTime = 0;
	KafkaErrorStructure.TransactionRate = 0;
	
}

/************************************************************************************************************ 
 *                                             Produce All
 ************************************************************************************************************/
bool UKafkaBPLibrary::KafkaProduceAll(FName Topic, TArray<FString> MessageArray, TMap<FString, FString> ConfigurationSettings, FKafkaDriverErrorStructure& KafkaErrorStructure)
{
	ClearErrorStructure(KafkaErrorStructure);
	FDateTime date1 = FDateTime::Now();

	UKafkaDriver* KafkaDriver = NewObject<UKafkaDriver>(UKafkaDriver::StaticClass());

	if (!CreateKafkaProducer(KafkaDriver, ConfigurationSettings))
	{
		MakePluginError(KafkaErrorStructure, EPluginErrorEnumType::NOKAFKAPRODUCER);
		return false;
	}

	if (!CreateKafkaProducerTopic(KafkaDriver, Topic, ConfigurationSettings))
	{
		MakePluginError(KafkaErrorStructure, EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC);
		return false;
	}

	if (!KafkaProduceMessages(KafkaDriver, MessageArray))
	{
		MakeDriverError(KafkaErrorStructure, KafkaDriver, "KafkaProduceAll - KafkaProduceMessages");
		return false;
	}

	ElapsedSeconds(FTimespan(FDateTime::Now() - date1), KafkaErrorStructure.ElapsedTime, KafkaErrorStructure.TransactionRate, MessageArray.Num());

	KafkaDriver->kafkaModule->ProducerEnd();
	return true;
}

//
//bool UKafkaBPLibrary::KafkaProduceAll(FName ftopic, TArray<FString> StrArr, TMap<FString, FString> ConfigurationSettings)
//{
//	FString Err = "";
//
//	UKafkaDriver* KafkaDriver = NewObject<UKafkaDriver>(UKafkaDriver::StaticClass());
//
//	if (!CreateKafkaProducer(KafkaDriver, ConfigurationSettings))
//	{
//		return false;
//	}
//
//	if(!CreateKafkaProducerTopic(KafkaDriver, ftopic, ConfigurationSettings))
//	{
//		return false;
//	}
//
//	if (!KafkaProduceMessages(KafkaDriver, StrArr))
//	{
//		return false;
//	}
//
//	KafkaDriver->kafkaModule->ProducerEnd();
//	return true;
//}
//

void UKafkaBPLibrary::MakeDriver(UClass *ObjectClass, UObject* &CreatedObject)
{
	CreatedObject = NewObject<UObject>((UObject*)GetTransientPackage(), ObjectClass);
	return;
}

/***************Error Checking*************/

int UKafkaBPLibrary::GetLastErrorCode(UKafkaDriver* KafkaDriver)
{
	if (KafkaReady(KafkaDriver, true))
	{
		return KafkaDriver->kafkaModule->GetLastErrorCode();
	}
	return -1;
}

EKafkaEventEnumType UKafkaBPLibrary::GetLastEventNum(UKafkaDriver* KafkaDriver)
{
	if (KafkaReady(KafkaDriver, true))
	{
		return MakeEnum(KafkaDriver->kafkaModule->GetLastErrorCode());

	}
	return EKafkaEventEnumType::OTHERERROR;
}

EKafkaEventEnumType UKafkaBPLibrary::MakeEnum(int ErrorCode)
{
	EKafkaEventEnumType LastEvent = EKafkaEventEnumType::OTHERERROR;

	switch (ErrorCode)
	{
	case EKafkaEventEnumType::NOERROR:
		LastEvent = EKafkaEventEnumType::NOERROR;
		break;

	case EKafkaEventEnumType::TIMEDOUT:
		LastEvent = EKafkaEventEnumType::TIMEDOUT;
		break;

	case EKafkaEventEnumType::PARTITIONEOF:
		LastEvent = EKafkaEventEnumType::PARTITIONEOF;
		break;

	case EKafkaEventEnumType::UNKNOWNTOPIC:
		LastEvent = EKafkaEventEnumType::UNKNOWNTOPIC;
		break;

	case EKafkaEventEnumType::UNKNOWNPARTITION:
		LastEvent = EKafkaEventEnumType::UNKNOWNPARTITION;
		break;
	}

	return LastEvent;
}

void UKafkaBPLibrary::PrintPluginErrorAsString(EPluginErrorEnumType EnumValue)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetPluginErrorAsString(EnumValue));
}

FString UKafkaBPLibrary::GetPluginErrorAsString(EPluginErrorEnumType EnumValue)
{
	UEnum* pEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EPluginErrorEnumType"));
	return pEnum->GetNameStringByIndex(static_cast<uint8>(EnumValue));
}

bool UKafkaBPLibrary::KafkaReady(UKafkaDriver* KafkaDriver, bool LogError)
{
	if (!KafkaDriver)
	{
		if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKADRIVER);
		return false;
	}
	if (!KafkaDriver->kafkaModule)
	{
		if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKAMODULE);
		return false;
	}
	return true;
}

bool UKafkaBPLibrary::KafkaConsumerReady(UKafkaDriver* KafkaDriver, bool LogError)
{
	if (KafkaReady(KafkaDriver, LogError))
	{
		if (KafkaDriver->kafkaModule->GetConsumer())
		{
			return true;
		}
		else
		{
			if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKACONSUMER);
		}
	}
	return false;
}

bool UKafkaBPLibrary::KafkaConsumerTopicReady(UKafkaDriver* KafkaDriver, bool LogError)
{
	if (KafkaConsumerReady(KafkaDriver, LogError))
	{
		if (KafkaDriver->kafkaModule->ConsumerTopicIsSet())
		{
			return true;
		}
		else
		{
			if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKACONSUMERTOPIC);
		}
	}
	return false;
}

bool UKafkaBPLibrary::KafkaProducerReady(UKafkaDriver* KafkaDriver, bool LogError)
{
	if (KafkaReady(KafkaDriver, LogError))
	{
		if (KafkaDriver->kafkaModule->GetProducer())
		{
			return true;
		}
		else
		{
			if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKAPRODUCER);
		}
	}
	return false;
}

bool UKafkaBPLibrary::KafkaProducerTopicReady(UKafkaDriver* KafkaDriver, bool LogError)
{
	if (KafkaProducerReady(KafkaDriver, LogError))
	{
		if (KafkaDriver->kafkaModule->GetTopic())
		{
			return true;
		}
		else
		{
			if (LogError) PrintPluginErrorAsString(EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC);
		}
	}
	return false;
}

/***************UKafkaDriver*************/
UKafkaDriver::UKafkaDriver()
{
	kafkaModule = new FKafkaModule();
}

UKafkaDriver::UKafkaDriver(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	kafkaModule = new FKafkaModule();
}

UKafkaDriver::~UKafkaDriver()
{
	if (kafkaModule)
		delete kafkaModule;
}


