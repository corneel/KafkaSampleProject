// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

#include "CoreUObject.h"
#include "Engine.h"
#include "rdkafkacpp.h"

#include "Kafka.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "KafkaBPLibrary.generated.h"


UENUM(BlueprintType, Category = "KafkaPlugin")
enum class EKafkaEventEnumType : uint8
{
	NOERROR				UMETA(DisplayName = "No Error"),
	TIMEDOUT			UMETA(DisplayName = "Timed Out"),
	PARTITIONEOF		UMETA(DisplayName = "All Partitions EOF"),
	UNKNOWNTOPIC		UMETA(DisplayName = "Unknown Topic"),
	UNKNOWNPARTITION	UMETA(DisplayName = "Unknown Partition"),
	PLUGINERROR			UMETA(DisplayName = "Plugin Error"),
	OTHERERROR			UMETA(DisplayName = "Other Error Occurred")
};

UENUM(BlueprintType, Category = "KafkaPlugin")
enum class EPluginErrorEnumType : uint8
{
	NOERROR					UMETA(DisplayName = "No Error"),
	DRIVERERROR				UMETA(DisplayName = "Driver Error"),
	NOKAFKADRIVER			UMETA(DisplayName = "Kafka driver not initialized"),
	NOKAFKAMODULE			UMETA(DisplayName = "Internal Kafka module not initialized"),
	NOKAFKACONSUMER			UMETA(DisplayName = "Kafka Consumer not initialized"),
	NOKAFKAPRODUCER			UMETA(DisplayName = "Kafka Producer not initialized"),
	NOKAFKACONSUMERTOPIC	UMETA(DisplayName = "Kafka Consumer Topic not initialized"),
	NOKAFKAPRODUCERTOPIC	UMETA(DisplayName = "Kafka Producer Topic not initialized")
};

USTRUCT(BlueprintType, Category = "KafkaPlugin")
struct FKafkaDriverErrorStructure
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
	int Errorcode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
	FString ErrorMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
	EKafkaEventEnumType KafkaEventEnumType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
	EPluginErrorEnumType PluginErrorEnumType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
		float ElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KafkaPlugin")
		float TransactionRate;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKafkaMessageEvent, const FString&, Message, int, ErrorCode, const EKafkaEventEnumType&, LastKafkaEventEnum);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKafkaProduceMessageEvent, const FString&, Message, int, ErrorCode, const EKafkaEventEnumType&, LastKafkaEventEnum);

UCLASS(BlueprintType, Blueprintable)
class UKafkaBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/*******************Produce****************/

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce All", Keywords = "Kafka Produce All"), Category = "KafkaPlugin")
		bool KafkaProduceAll(FName Topic, TArray<FString> MessageArray, TMap<FString, FString> ConfigurationSettings, FKafkaDriverErrorStructure& KafkaErrorStructure);

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce All", Keywords = "Kafka Produce All"), Category = "KafkaPlugin")
		static bool KafkaProduceAll(FName ftopic, TArray<FString> StrArr, TMap<FString, FString> ConfigurationSettings);*/

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Kafka Producer", Keywords = "Create Kafka Producer"), Category = "KafkaPlugin")
		static bool CreateKafkaProducer(UKafkaDriver* KafkaDriver, TMap<FString, FString> ConfigurationSettings);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Kafka Producer Topic", Keywords = "Create Kafka Producer Topic"), Category = "KafkaPlugin")
		static bool CreateKafkaProducerTopic(UKafkaDriver* KafkaDriver, FName Topic, TMap<FString, FString> ConfigurationSettings);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce Messages", Keywords = "Kafka Producer Messages"), Category = "KafkaPlugin")
		static bool KafkaProduceMessages(UKafkaDriver* KafkaDriver, TArray<FString> MessageArray);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce Message", Keywords = "Kafka Producer Message"), Category = "KafkaPlugin")
		static bool KafkaProduceMessage(UKafkaDriver* KafkaDriver, FString Message);

	/**************Event Processing************/

	UPROPERTY(BlueprintAssignable, BlueprintCallable, meta = (DisplayName = "OnKafkaMessageEvent"))
		FOnKafkaMessageEvent OnKafkaMessageEvent;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, meta = (DisplayName = "OnKafkaProduceMessageEvent"))
		FOnKafkaProduceMessageEvent OnKafkaProduceMessageEvent;

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnKafkaProduceEvent", ExpandEnumAsExecs = "LastKafkaEventEnum"))
		void OnKafkaProduceEvent(const FString& Message, int ErrorCode, const EKafkaEventEnumType& LastKafkaEventEnum);

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnKafkaMessage", ExpandEnumAsExecs = "LastKafkaEventEnum"))
		void OnKafkaMessage(const FString& Message, int ErrorCode, const EKafkaEventEnumType& LastKafkaEventEnum);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Consume Message Events", Keywords = "Kafka Consumer Message Events"), Category = "KafkaPlugin")
		bool KafkaConsumeMessageEvents(UKafkaDriver* KafkaDriver, bool AllMessages = true);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce Message Events", Keywords = "Kafka Produce Message Events"), Category = "KafkaPlugin")
		bool KafkaProduceMessageEvents(UKafkaDriver* KafkaDriver, TArray<FString> MessageArray);

	/*******************Consume****************/
	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Produce All", Keywords = "Kafka Produce All"), Category = "KafkaPlugin")
		bool KafkaProduceAll(FName Topic, TArray<FString> MessageArray, TMap<FString, FString> ConfigurationSettings, FKafkaDriverErrorStructure& KafkaErrorStructure);*/

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Consume All", Keywords = "Kafka Consumer All"), Category = "KafkaPlugin")
		bool KafkaConsumeAll(FName Topic, TMap<FString, FString> ConfigurationSettings, TArray<FString>& MessageArray, FKafkaDriverErrorStructure& KafkaErrorStructure);

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Consume All", Keywords = "Kafka Consumer All"), Category = "KafkaPlugin")
		static TArray<FString> KafkaConsumeAll(FName Topic, TMap<FString, FString> ConfigurationSettings);*/

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Kafka Consumer", Keywords = "Create Kafka Consumer"), Category = "KafkaPlugin")
		static bool CreateKafkaConsumer(UKafkaDriver* KafkaDriver, TMap<FString, FString> ConfigurationSettings);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Kafka Consumer Topic", Keywords = "Create Kafka Consumer Topic"), Category = "KafkaPlugin")
		static bool CreateKafkaConsumerTopic(UKafkaDriver* KafkaDriver, FName Topic, TMap<FString, FString> ConfigurationSettings);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Consume Messages", Keywords = "Kafka Consumer Messages"), Category = "KafkaPlugin")
		static bool KafkaConsumeMessages(UKafkaDriver* KafkaDriver, TArray<FString>& MessageArray);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Consume Message", Keywords = "Kafka Consumer Message"), Category = "KafkaPlugin")
		static bool KafkaConsumeMessage(UKafkaDriver* KafkaDriver, FString& Message);

	/*******************End of Consumption****************/
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Make Kafka Driver", Keywords = "Make Kafka Driver"), Category = "Object, KafkaPlugin")
		static void MakeDriver(UClass *ObjectClass, UObject* &CreatedObject);

	UPROPERTY(BlueprintReadOnly, Category = "KafkaPlugin")
		EKafkaEventEnumType KafkaEventEnum;

	UPROPERTY(BlueprintReadOnly, Category = "KafkaPlugin")
		EPluginErrorEnumType PluginErrorEnumType;

	UPROPERTY(BlueprintReadOnly, Category = "KafkaPlugin")
		FKafkaDriverErrorStructure KafkaDriverErrorStructure;

	/***************Error Checking*************/

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Get Last Error Code", Keywords = "Kafka Get Last Error Code"), Category = "KafkaPlugin")
		static int GetLastErrorCode(UKafkaDriver* KafkaDriver);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Kafka Get Last EventNum", Keywords = "Kafka Get Last EventNum"), Category = "KafkaPlugin")
		static EKafkaEventEnumType GetLastEventNum(UKafkaDriver* KafkaDriver);

	static EKafkaEventEnumType MakeEnum(int ErrorCode);
	static FString GetPluginErrorAsString(EPluginErrorEnumType EnumValue);
	static void ClearErrorStructure(FKafkaDriverErrorStructure& KafkaErrorStructure);
	static void MakePluginError(FKafkaDriverErrorStructure& KafkaErrorStructure, EPluginErrorEnumType PluginErrorEnumType);
	static void MakeDriverError(FKafkaDriverErrorStructure& KafkaErrorStructure, UKafkaDriver* KafkaDriver, FString ErrorPrefix = "");
	static void PrintPluginErrorAsString(EPluginErrorEnumType EnumValue);
	static bool KafkaReady(UKafkaDriver * KafkaDriver, bool LogError = true);
	static bool KafkaConsumerReady(UKafkaDriver * KafkaDriver, bool LogError = true);
	static bool KafkaConsumerTopicReady(UKafkaDriver * KafkaDriver, bool LogError = true);
	static bool KafkaProducerReady(UKafkaDriver * KafkaDriver, bool LogError = true);
	static bool KafkaProducerTopicReady(UKafkaDriver * KafkaDriver, bool LogError = true);
	static void ElapsedSeconds(FTimespan span, float& ElapsedTime, float& TransactionRate, int size = 1)
	{
		ElapsedTime = TransactionRate = 0;
		ElapsedTime = span.GetTotalSeconds();
		if (ElapsedTime > 0)
		{
			TransactionRate = size / ElapsedTime;
		}
	};
};

/***************UKafkaDriver*************/
UCLASS(BlueprintType)
class UKafkaDriver : public UObject
{
	GENERATED_BODY()
public:
	UKafkaDriver();
	UKafkaDriver(const FObjectInitializer& ObjectInitializer);

	~UKafkaDriver();

	////UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Kafka Blueprint Parent", Keywords = "Set Kafka Blueprint Parent"), Category = "KafkaPlugin")
	//void SetKafkaBlueprintParent(UKafkaBPLibrary* parent) { ParentUKafkaBPLibrary = parent; }

	////UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Kafka Blueprint Parent", Keywords = "Get Kafka Blueprint Parent"), Category = "KafkaPlugin")
	//UKafkaBPLibrary* GetKafkaBlueprintParent() { return ParentUKafkaBPLibrary; }

	FKafkaModule *kafkaModule;
	//UKafkaBPLibrary* ParentUKafkaBPLibrary;
};


