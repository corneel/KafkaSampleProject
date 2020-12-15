// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kafka/Public/KafkaBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaBPLibrary() {}
// Cross Module References
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Kafka();
	KAFKA_API UEnum* Z_Construct_UEnum_Kafka_EKafkaEventEnumType();
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature();
	KAFKA_API UEnum* Z_Construct_UEnum_Kafka_EPluginErrorEnumType();
	KAFKA_API UScriptStruct* Z_Construct_UScriptStruct_FKafkaDriverErrorStructure();
	KAFKA_API UClass* Z_Construct_UClass_UKafkaBPLibrary_NoRegister();
	KAFKA_API UClass* Z_Construct_UClass_UKafkaBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KAFKA_API UClass* Z_Construct_UClass_UKafkaDriver_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	KAFKA_API UClass* Z_Construct_UClass_UKafkaDriver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics
	{
		struct _Script_Kafka_eventOnKafkaProduceMessageEvent_Parms
		{
			FString Message;
			int32 ErrorCode;
			EKafkaEventEnumType LastKafkaEventEnum;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastKafkaEventEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKafkaEventEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastKafkaEventEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaProduceMessageEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaProduceMessageEvent_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum = { "LastKafkaEventEnum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaProduceMessageEvent_Parms, LastKafkaEventEnum), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Kafka, nullptr, "OnKafkaProduceMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Kafka_eventOnKafkaProduceMessageEvent_Parms), Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics
	{
		struct _Script_Kafka_eventOnKafkaMessageEvent_Parms
		{
			FString Message;
			int32 ErrorCode;
			EKafkaEventEnumType LastKafkaEventEnum;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastKafkaEventEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKafkaEventEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastKafkaEventEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaMessageEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaMessageEvent_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum = { "LastKafkaEventEnum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnKafkaMessageEvent_Parms, LastKafkaEventEnum), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::NewProp_LastKafkaEventEnum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Kafka, nullptr, "OnKafkaMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Kafka_eventOnKafkaMessageEvent_Parms), Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPluginErrorEnumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kafka_EPluginErrorEnumType, Z_Construct_UPackage__Script_Kafka(), TEXT("EPluginErrorEnumType"));
		}
		return Singleton;
	}
	template<> KAFKA_API UEnum* StaticEnum<EPluginErrorEnumType>()
	{
		return EPluginErrorEnumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPluginErrorEnumType(EPluginErrorEnumType_StaticEnum, TEXT("/Script/Kafka"), TEXT("EPluginErrorEnumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kafka_EPluginErrorEnumType_Hash() { return 2389200249U; }
	UEnum* Z_Construct_UEnum_Kafka_EPluginErrorEnumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kafka();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPluginErrorEnumType"), 0, Get_Z_Construct_UEnum_Kafka_EPluginErrorEnumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPluginErrorEnumType::NOERROR", (int64)EPluginErrorEnumType::NOERROR },
				{ "EPluginErrorEnumType::DRIVERERROR", (int64)EPluginErrorEnumType::DRIVERERROR },
				{ "EPluginErrorEnumType::NOKAFKADRIVER", (int64)EPluginErrorEnumType::NOKAFKADRIVER },
				{ "EPluginErrorEnumType::NOKAFKAMODULE", (int64)EPluginErrorEnumType::NOKAFKAMODULE },
				{ "EPluginErrorEnumType::NOKAFKACONSUMER", (int64)EPluginErrorEnumType::NOKAFKACONSUMER },
				{ "EPluginErrorEnumType::NOKAFKAPRODUCER", (int64)EPluginErrorEnumType::NOKAFKAPRODUCER },
				{ "EPluginErrorEnumType::NOKAFKACONSUMERTOPIC", (int64)EPluginErrorEnumType::NOKAFKACONSUMERTOPIC },
				{ "EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC", (int64)EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "KafkaPlugin" },
				{ "DRIVERERROR.DisplayName", "Driver Error" },
				{ "DRIVERERROR.Name", "EPluginErrorEnumType::DRIVERERROR" },
				{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
				{ "NOERROR.DisplayName", "No Error" },
				{ "NOERROR.Name", "EPluginErrorEnumType::NOERROR" },
				{ "NOKAFKACONSUMER.DisplayName", "Kafka Consumer not initialized" },
				{ "NOKAFKACONSUMER.Name", "EPluginErrorEnumType::NOKAFKACONSUMER" },
				{ "NOKAFKACONSUMERTOPIC.DisplayName", "Kafka Consumer Topic not initialized" },
				{ "NOKAFKACONSUMERTOPIC.Name", "EPluginErrorEnumType::NOKAFKACONSUMERTOPIC" },
				{ "NOKAFKADRIVER.DisplayName", "Kafka driver not initialized" },
				{ "NOKAFKADRIVER.Name", "EPluginErrorEnumType::NOKAFKADRIVER" },
				{ "NOKAFKAMODULE.DisplayName", "Internal Kafka module not initialized" },
				{ "NOKAFKAMODULE.Name", "EPluginErrorEnumType::NOKAFKAMODULE" },
				{ "NOKAFKAPRODUCER.DisplayName", "Kafka Producer not initialized" },
				{ "NOKAFKAPRODUCER.Name", "EPluginErrorEnumType::NOKAFKAPRODUCER" },
				{ "NOKAFKAPRODUCERTOPIC.DisplayName", "Kafka Producer Topic not initialized" },
				{ "NOKAFKAPRODUCERTOPIC.Name", "EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kafka,
				nullptr,
				"EPluginErrorEnumType",
				"EPluginErrorEnumType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EKafkaEventEnumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kafka_EKafkaEventEnumType, Z_Construct_UPackage__Script_Kafka(), TEXT("EKafkaEventEnumType"));
		}
		return Singleton;
	}
	template<> KAFKA_API UEnum* StaticEnum<EKafkaEventEnumType>()
	{
		return EKafkaEventEnumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKafkaEventEnumType(EKafkaEventEnumType_StaticEnum, TEXT("/Script/Kafka"), TEXT("EKafkaEventEnumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kafka_EKafkaEventEnumType_Hash() { return 2890905287U; }
	UEnum* Z_Construct_UEnum_Kafka_EKafkaEventEnumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kafka();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKafkaEventEnumType"), 0, Get_Z_Construct_UEnum_Kafka_EKafkaEventEnumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKafkaEventEnumType::NOERROR", (int64)EKafkaEventEnumType::NOERROR },
				{ "EKafkaEventEnumType::TIMEDOUT", (int64)EKafkaEventEnumType::TIMEDOUT },
				{ "EKafkaEventEnumType::PARTITIONEOF", (int64)EKafkaEventEnumType::PARTITIONEOF },
				{ "EKafkaEventEnumType::UNKNOWNTOPIC", (int64)EKafkaEventEnumType::UNKNOWNTOPIC },
				{ "EKafkaEventEnumType::UNKNOWNPARTITION", (int64)EKafkaEventEnumType::UNKNOWNPARTITION },
				{ "EKafkaEventEnumType::PLUGINERROR", (int64)EKafkaEventEnumType::PLUGINERROR },
				{ "EKafkaEventEnumType::OTHERERROR", (int64)EKafkaEventEnumType::OTHERERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "KafkaPlugin" },
				{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
				{ "NOERROR.DisplayName", "No Error" },
				{ "NOERROR.Name", "EKafkaEventEnumType::NOERROR" },
				{ "OTHERERROR.DisplayName", "Other Error Occurred" },
				{ "OTHERERROR.Name", "EKafkaEventEnumType::OTHERERROR" },
				{ "PARTITIONEOF.DisplayName", "All Partitions EOF" },
				{ "PARTITIONEOF.Name", "EKafkaEventEnumType::PARTITIONEOF" },
				{ "PLUGINERROR.DisplayName", "Plugin Error" },
				{ "PLUGINERROR.Name", "EKafkaEventEnumType::PLUGINERROR" },
				{ "TIMEDOUT.DisplayName", "Timed Out" },
				{ "TIMEDOUT.Name", "EKafkaEventEnumType::TIMEDOUT" },
				{ "UNKNOWNPARTITION.DisplayName", "Unknown Partition" },
				{ "UNKNOWNPARTITION.Name", "EKafkaEventEnumType::UNKNOWNPARTITION" },
				{ "UNKNOWNTOPIC.DisplayName", "Unknown Topic" },
				{ "UNKNOWNTOPIC.Name", "EKafkaEventEnumType::UNKNOWNTOPIC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kafka,
				nullptr,
				"EKafkaEventEnumType",
				"EKafkaEventEnumType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKafkaDriverErrorStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAFKA_API uint32 Get_Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure, Z_Construct_UPackage__Script_Kafka(), TEXT("KafkaDriverErrorStructure"), sizeof(FKafkaDriverErrorStructure), Get_Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Hash());
	}
	return Singleton;
}
template<> KAFKA_API UScriptStruct* StaticStruct<FKafkaDriverErrorStructure>()
{
	return FKafkaDriverErrorStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKafkaDriverErrorStructure(FKafkaDriverErrorStructure::StaticStruct, TEXT("/Script/Kafka"), TEXT("KafkaDriverErrorStructure"), false, nullptr, nullptr);
static struct FScriptStruct_Kafka_StaticRegisterNativesFKafkaDriverErrorStructure
{
	FScriptStruct_Kafka_StaticRegisterNativesFKafkaDriverErrorStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KafkaDriverErrorStructure")),new UScriptStruct::TCppStructOps<FKafkaDriverErrorStructure>);
	}
} ScriptStruct_Kafka_StaticRegisterNativesFKafkaDriverErrorStructure;
	struct Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Errorcode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Errorcode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KafkaEventEnumType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KafkaEventEnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KafkaEventEnumType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PluginErrorEnumType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginErrorEnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PluginErrorEnumType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransactionRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKafkaDriverErrorStructure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_Errorcode_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_Errorcode = { "Errorcode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, Errorcode), METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_Errorcode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_Errorcode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType = { "KafkaEventEnumType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, KafkaEventEnumType), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType = { "PluginErrorEnumType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, PluginErrorEnumType), Z_Construct_UEnum_Kafka_EPluginErrorEnumType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_TransactionRate_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_TransactionRate = { "TransactionRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKafkaDriverErrorStructure, TransactionRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_TransactionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_TransactionRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_Errorcode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_KafkaEventEnumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_PluginErrorEnumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::NewProp_TransactionRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kafka,
		nullptr,
		&NewStructOps,
		"KafkaDriverErrorStructure",
		sizeof(FKafkaDriverErrorStructure),
		alignof(FKafkaDriverErrorStructure),
		Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKafkaDriverErrorStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Kafka();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KafkaDriverErrorStructure"), sizeof(FKafkaDriverErrorStructure), Get_Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Hash() { return 4096997292U; }
	DEFINE_FUNCTION(UKafkaBPLibrary::execGetLastEventNum)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKafkaEventEnumType*)Z_Param__Result=UKafkaBPLibrary::GetLastEventNum(Z_Param_KafkaDriver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execGetLastErrorCode)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKafkaBPLibrary::GetLastErrorCode(Z_Param_KafkaDriver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execMakeDriver)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_CreatedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKafkaBPLibrary::MakeDriver(Z_Param_ObjectClass,Z_Param_Out_CreatedObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaConsumeMessage)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessage(Z_Param_KafkaDriver,Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaConsumeMessages)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessages(Z_Param_KafkaDriver,Z_Param_Out_MessageArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execCreateKafkaConsumerTopic)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_PROPERTY(FNameProperty,Z_Param_Topic);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execCreateKafkaConsumer)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaConsumeAll)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Topic);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray);
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeAll(Z_Param_Topic,Z_Param_ConfigurationSettings,Z_Param_Out_MessageArray,Z_Param_Out_KafkaErrorStructure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaProduceMessageEvents)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_TARRAY(FString,Z_Param_MessageArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceMessageEvents(Z_Param_KafkaDriver,Z_Param_MessageArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaConsumeMessageEvents)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_UBOOL(Z_Param_AllMessages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeMessageEvents(Z_Param_KafkaDriver,Z_Param_AllMessages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execOnKafkaMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_ErrorCode);
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKafkaMessage_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execOnKafkaProduceEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_ErrorCode);
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKafkaProduceEvent_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaProduceMessage)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessage(Z_Param_KafkaDriver,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaProduceMessages)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_TARRAY(FString,Z_Param_MessageArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessages(Z_Param_KafkaDriver,Z_Param_MessageArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execCreateKafkaProducerTopic)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_PROPERTY(FNameProperty,Z_Param_Topic);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execCreateKafkaProducer)
	{
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKafkaBPLibrary::execKafkaProduceAll)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Topic);
		P_GET_TARRAY(FString,Z_Param_MessageArray);
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings);
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceAll(Z_Param_Topic,Z_Param_MessageArray,Z_Param_ConfigurationSettings,Z_Param_Out_KafkaErrorStructure);
		P_NATIVE_END;
	}
	static FName NAME_UKafkaBPLibrary_OnKafkaMessage = FName(TEXT("OnKafkaMessage"));
	void UKafkaBPLibrary::OnKafkaMessage(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum)
	{
		KafkaBPLibrary_eventOnKafkaMessage_Parms Parms;
		Parms.Message=Message;
		Parms.ErrorCode=ErrorCode;
		Parms.LastKafkaEventEnum=LastKafkaEventEnum;
		ProcessEvent(FindFunctionChecked(NAME_UKafkaBPLibrary_OnKafkaMessage),&Parms);
	}
	static FName NAME_UKafkaBPLibrary_OnKafkaProduceEvent = FName(TEXT("OnKafkaProduceEvent"));
	void UKafkaBPLibrary::OnKafkaProduceEvent(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum)
	{
		KafkaBPLibrary_eventOnKafkaProduceEvent_Parms Parms;
		Parms.Message=Message;
		Parms.ErrorCode=ErrorCode;
		Parms.LastKafkaEventEnum=LastKafkaEventEnum;
		ProcessEvent(FindFunctionChecked(NAME_UKafkaBPLibrary_OnKafkaProduceEvent),&Parms);
	}
	void UKafkaBPLibrary::StaticRegisterNativesUKafkaBPLibrary()
	{
		UClass* Class = UKafkaBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateKafkaConsumer", &UKafkaBPLibrary::execCreateKafkaConsumer },
			{ "CreateKafkaConsumerTopic", &UKafkaBPLibrary::execCreateKafkaConsumerTopic },
			{ "CreateKafkaProducer", &UKafkaBPLibrary::execCreateKafkaProducer },
			{ "CreateKafkaProducerTopic", &UKafkaBPLibrary::execCreateKafkaProducerTopic },
			{ "GetLastErrorCode", &UKafkaBPLibrary::execGetLastErrorCode },
			{ "GetLastEventNum", &UKafkaBPLibrary::execGetLastEventNum },
			{ "KafkaConsumeAll", &UKafkaBPLibrary::execKafkaConsumeAll },
			{ "KafkaConsumeMessage", &UKafkaBPLibrary::execKafkaConsumeMessage },
			{ "KafkaConsumeMessageEvents", &UKafkaBPLibrary::execKafkaConsumeMessageEvents },
			{ "KafkaConsumeMessages", &UKafkaBPLibrary::execKafkaConsumeMessages },
			{ "KafkaProduceAll", &UKafkaBPLibrary::execKafkaProduceAll },
			{ "KafkaProduceMessage", &UKafkaBPLibrary::execKafkaProduceMessage },
			{ "KafkaProduceMessageEvents", &UKafkaBPLibrary::execKafkaProduceMessageEvents },
			{ "KafkaProduceMessages", &UKafkaBPLibrary::execKafkaProduceMessages },
			{ "MakeDriver", &UKafkaBPLibrary::execMakeDriver },
			{ "OnKafkaMessage", &UKafkaBPLibrary::execOnKafkaMessage },
			{ "OnKafkaProduceEvent", &UKafkaBPLibrary::execOnKafkaProduceEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics
	{
		struct KafkaBPLibrary_eventCreateKafkaConsumer_Parms
		{
			UKafkaDriver* KafkaDriver;
			TMap<FString,FString> ConfigurationSettings;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaConsumer_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaConsumer_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventCreateKafkaConsumer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventCreateKafkaConsumer_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Consume All\", Keywords = \"Kafka Consumer All\"), Category = \"KafkaPlugin\")\n\x09\x09static TArray<FString> KafkaConsumeAll(FName Topic, TMap<FString, FString> ConfigurationSettings);*/" },
		{ "DisplayName", "Create Kafka Consumer" },
		{ "Keywords", "Create Kafka Consumer" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Consume All\", Keywords = \"Kafka Consumer All\"), Category = \"KafkaPlugin\")\n               static TArray<FString> KafkaConsumeAll(FName Topic, TMap<FString, FString> ConfigurationSettings);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "CreateKafkaConsumer", nullptr, nullptr, sizeof(KafkaBPLibrary_eventCreateKafkaConsumer_Parms), Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics
	{
		struct KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms
		{
			UKafkaDriver* KafkaDriver;
			FName Topic;
			TMap<FString,FString> ConfigurationSettings;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Create Kafka Consumer Topic" },
		{ "Keywords", "Create Kafka Consumer Topic" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "CreateKafkaConsumerTopic", nullptr, nullptr, sizeof(KafkaBPLibrary_eventCreateKafkaConsumerTopic_Parms), Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics
	{
		struct KafkaBPLibrary_eventCreateKafkaProducer_Parms
		{
			UKafkaDriver* KafkaDriver;
			TMap<FString,FString> ConfigurationSettings;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaProducer_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaProducer_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventCreateKafkaProducer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventCreateKafkaProducer_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Produce All\", Keywords = \"Kafka Produce All\"), Category = \"KafkaPlugin\")\n\x09\x09static bool KafkaProduceAll(FName ftopic, TArray<FString> StrArr, TMap<FString, FString> ConfigurationSettings);*/" },
		{ "DisplayName", "Create Kafka Producer" },
		{ "Keywords", "Create Kafka Producer" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Produce All\", Keywords = \"Kafka Produce All\"), Category = \"KafkaPlugin\")\n               static bool KafkaProduceAll(FName ftopic, TArray<FString> StrArr, TMap<FString, FString> ConfigurationSettings);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "CreateKafkaProducer", nullptr, nullptr, sizeof(KafkaBPLibrary_eventCreateKafkaProducer_Parms), Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics
	{
		struct KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms
		{
			UKafkaDriver* KafkaDriver;
			FName Topic;
			TMap<FString,FString> ConfigurationSettings;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Create Kafka Producer Topic" },
		{ "Keywords", "Create Kafka Producer Topic" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "CreateKafkaProducerTopic", nullptr, nullptr, sizeof(KafkaBPLibrary_eventCreateKafkaProducerTopic_Parms), Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics
	{
		struct KafkaBPLibrary_eventGetLastErrorCode_Parms
		{
			UKafkaDriver* KafkaDriver;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventGetLastErrorCode_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventGetLastErrorCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "Comment", "/***************Error Checking*************/" },
		{ "DisplayName", "Kafka Get Last Error Code" },
		{ "Keywords", "Kafka Get Last Error Code" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "************Error Checking************" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "GetLastErrorCode", nullptr, nullptr, sizeof(KafkaBPLibrary_eventGetLastErrorCode_Parms), Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics
	{
		struct KafkaBPLibrary_eventGetLastEventNum_Parms
		{
			UKafkaDriver* KafkaDriver;
			EKafkaEventEnumType ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventGetLastEventNum_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventGetLastEventNum_Parms, ReturnValue), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Get Last EventNum" },
		{ "Keywords", "Kafka Get Last EventNum" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "GetLastEventNum", nullptr, nullptr, sizeof(KafkaBPLibrary_eventGetLastEventNum_Parms), Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics
	{
		struct KafkaBPLibrary_eventKafkaConsumeAll_Parms
		{
			FName Topic;
			TMap<FString,FString> ConfigurationSettings;
			TArray<FString> MessageArray;
			FKafkaDriverErrorStructure KafkaErrorStructure;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KafkaErrorStructure;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeAll_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeAll_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeAll_Parms, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_KafkaErrorStructure = { "KafkaErrorStructure", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeAll_Parms, KafkaErrorStructure), Z_Construct_UScriptStruct_FKafkaDriverErrorStructure, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaConsumeAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaConsumeAll_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_MessageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_MessageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_KafkaErrorStructure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Produce All\", Keywords = \"Kafka Produce All\"), Category = \"KafkaPlugin\")\n\x09\x09""bool KafkaProduceAll(FName Topic, TArray<FString> MessageArray, TMap<FString, FString> ConfigurationSettings, FKafkaDriverErrorStructure& KafkaErrorStructure);*/" },
		{ "DisplayName", "Kafka Consume All" },
		{ "Keywords", "Kafka Consumer All" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Kafka Produce All\", Keywords = \"Kafka Produce All\"), Category = \"KafkaPlugin\")\n               bool KafkaProduceAll(FName Topic, TArray<FString> MessageArray, TMap<FString, FString> ConfigurationSettings, FKafkaDriverErrorStructure& KafkaErrorStructure);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaConsumeAll", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaConsumeAll_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics
	{
		struct KafkaBPLibrary_eventKafkaConsumeMessage_Parms
		{
			UKafkaDriver* KafkaDriver;
			FString Message;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeMessage_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaConsumeMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaConsumeMessage_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Consume Message" },
		{ "Keywords", "Kafka Consumer Message" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaConsumeMessage", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaConsumeMessage_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics
	{
		struct KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms
		{
			UKafkaDriver* KafkaDriver;
			bool AllMessages;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static void NewProp_AllMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllMessages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_AllMessages_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms*)Obj)->AllMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_AllMessages = { "AllMessages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_AllMessages_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_AllMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "CPP_Default_AllMessages", "true" },
		{ "DisplayName", "Kafka Consume Message Events" },
		{ "Keywords", "Kafka Consumer Message Events" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaConsumeMessageEvents", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaConsumeMessageEvents_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics
	{
		struct KafkaBPLibrary_eventKafkaConsumeMessages_Parms
		{
			UKafkaDriver* KafkaDriver;
			TArray<FString> MessageArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeMessages_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaConsumeMessages_Parms, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaConsumeMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaConsumeMessages_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_MessageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_MessageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Consume Messages" },
		{ "Keywords", "Kafka Consumer Messages" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaConsumeMessages", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaConsumeMessages_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics
	{
		struct KafkaBPLibrary_eventKafkaProduceAll_Parms
		{
			FName Topic;
			TArray<FString> MessageArray;
			TMap<FString,FString> ConfigurationSettings;
			FKafkaDriverErrorStructure KafkaErrorStructure;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationSettings_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigurationSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KafkaErrorStructure;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceAll_Parms, Topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceAll_Parms, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings_ValueProp = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings_Key_KeyProp = { "ConfigurationSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings = { "ConfigurationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceAll_Parms, ConfigurationSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_KafkaErrorStructure = { "KafkaErrorStructure", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceAll_Parms, KafkaErrorStructure), Z_Construct_UScriptStruct_FKafkaDriverErrorStructure, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaProduceAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaProduceAll_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_MessageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_MessageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ConfigurationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_KafkaErrorStructure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "Comment", "/*******************Produce****************/" },
		{ "DisplayName", "Kafka Produce All" },
		{ "Keywords", "Kafka Produce All" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "****************Produce***************" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaProduceAll", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaProduceAll_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics
	{
		struct KafkaBPLibrary_eventKafkaProduceMessage_Parms
		{
			UKafkaDriver* KafkaDriver;
			FString Message;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessage_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaProduceMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaProduceMessage_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Produce Message" },
		{ "Keywords", "Kafka Producer Message" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaProduceMessage", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaProduceMessage_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics
	{
		struct KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms
		{
			UKafkaDriver* KafkaDriver;
			TArray<FString> MessageArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_MessageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_MessageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Produce Message Events" },
		{ "Keywords", "Kafka Produce Message Events" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaProduceMessageEvents", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaProduceMessageEvents_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics
	{
		struct KafkaBPLibrary_eventKafkaProduceMessages_Parms
		{
			UKafkaDriver* KafkaDriver;
			TArray<FString> MessageArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KafkaDriver;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_KafkaDriver = { "KafkaDriver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessages_Parms, KafkaDriver), Z_Construct_UClass_UKafkaDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventKafkaProduceMessages_Parms, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KafkaBPLibrary_eventKafkaProduceMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KafkaBPLibrary_eventKafkaProduceMessages_Parms), &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_KafkaDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_MessageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_MessageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "KafkaPlugin" },
		{ "DisplayName", "Kafka Produce Messages" },
		{ "Keywords", "Kafka Producer Messages" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "KafkaProduceMessages", nullptr, nullptr, sizeof(KafkaBPLibrary_eventKafkaProduceMessages_Parms), Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics
	{
		struct KafkaBPLibrary_eventMakeDriver_Parms
		{
			UClass* ObjectClass;
			UObject* CreatedObject;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventMakeDriver_Parms, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::NewProp_CreatedObject = { "CreatedObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventMakeDriver_Parms, CreatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::NewProp_CreatedObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object, KafkaPlugin" },
		{ "Comment", "/*******************End of Consumption****************/" },
		{ "DisplayName", "Make Kafka Driver" },
		{ "Keywords", "Make Kafka Driver" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "****************End of Consumption***************" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "MakeDriver", nullptr, nullptr, sizeof(KafkaBPLibrary_eventMakeDriver_Parms), Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastKafkaEventEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKafkaEventEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastKafkaEventEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaMessage_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum = { "LastKafkaEventEnum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaMessage_Parms, LastKafkaEventEnum), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::NewProp_LastKafkaEventEnum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnKafkaMessage" },
		{ "ExpandEnumAsExecs", "LastKafkaEventEnum" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "OnKafkaMessage", nullptr, nullptr, sizeof(KafkaBPLibrary_eventOnKafkaMessage_Parms), Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastKafkaEventEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKafkaEventEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastKafkaEventEnum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaProduceEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaProduceEvent_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum = { "LastKafkaEventEnum", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KafkaBPLibrary_eventOnKafkaProduceEvent_Parms, LastKafkaEventEnum), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::NewProp_LastKafkaEventEnum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnKafkaProduceEvent" },
		{ "ExpandEnumAsExecs", "LastKafkaEventEnum" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKafkaBPLibrary, nullptr, "OnKafkaProduceEvent", nullptr, nullptr, sizeof(KafkaBPLibrary_eventOnKafkaProduceEvent_Parms), Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKafkaBPLibrary_NoRegister()
	{
		return UKafkaBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKafkaBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKafkaMessageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKafkaMessageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKafkaProduceMessageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKafkaProduceMessageEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KafkaEventEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KafkaEventEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KafkaEventEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PluginErrorEnumType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginErrorEnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PluginErrorEnumType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KafkaDriverErrorStructure_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KafkaDriverErrorStructure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKafkaBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Kafka,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKafkaBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumer, "CreateKafkaConsumer" }, // 511344578
		{ &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaConsumerTopic, "CreateKafkaConsumerTopic" }, // 1622742356
		{ &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducer, "CreateKafkaProducer" }, // 236923466
		{ &Z_Construct_UFunction_UKafkaBPLibrary_CreateKafkaProducerTopic, "CreateKafkaProducerTopic" }, // 3391056476
		{ &Z_Construct_UFunction_UKafkaBPLibrary_GetLastErrorCode, "GetLastErrorCode" }, // 3406349443
		{ &Z_Construct_UFunction_UKafkaBPLibrary_GetLastEventNum, "GetLastEventNum" }, // 139713376
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeAll, "KafkaConsumeAll" }, // 2590838738
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessage, "KafkaConsumeMessage" }, // 147688329
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessageEvents, "KafkaConsumeMessageEvents" }, // 3921736547
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaConsumeMessages, "KafkaConsumeMessages" }, // 93941100
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceAll, "KafkaProduceAll" }, // 4262383628
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessage, "KafkaProduceMessage" }, // 374439387
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessageEvents, "KafkaProduceMessageEvents" }, // 359829322
		{ &Z_Construct_UFunction_UKafkaBPLibrary_KafkaProduceMessages, "KafkaProduceMessages" }, // 43795325
		{ &Z_Construct_UFunction_UKafkaBPLibrary_MakeDriver, "MakeDriver" }, // 1778730954
		{ &Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaMessage, "OnKafkaMessage" }, // 1116740840
		{ &Z_Construct_UFunction_UKafkaBPLibrary_OnKafkaProduceEvent, "OnKafkaProduceEvent" }, // 3742101426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KafkaBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaMessageEvent_MetaData[] = {
		{ "Comment", "/**************Event Processing************/" },
		{ "DisplayName", "OnKafkaMessageEvent" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ToolTip", "***********Event Processing***********" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaMessageEvent = { "OnKafkaMessageEvent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKafkaBPLibrary, OnKafkaMessageEvent), Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaMessageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaMessageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaProduceMessageEvent_MetaData[] = {
		{ "DisplayName", "OnKafkaProduceMessageEvent" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaProduceMessageEvent = { "OnKafkaProduceMessageEvent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKafkaBPLibrary, OnKafkaProduceMessageEvent), Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaProduceMessageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaProduceMessageEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum = { "KafkaEventEnum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKafkaBPLibrary, KafkaEventEnum), Z_Construct_UEnum_Kafka_EKafkaEventEnumType, METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType = { "PluginErrorEnumType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKafkaBPLibrary, PluginErrorEnumType), Z_Construct_UEnum_Kafka_EPluginErrorEnumType, METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaDriverErrorStructure_MetaData[] = {
		{ "Category", "KafkaPlugin" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaDriverErrorStructure = { "KafkaDriverErrorStructure", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKafkaBPLibrary, KafkaDriverErrorStructure), Z_Construct_UScriptStruct_FKafkaDriverErrorStructure, METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaDriverErrorStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaDriverErrorStructure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKafkaBPLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaMessageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_OnKafkaProduceMessageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaEventEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_PluginErrorEnumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKafkaBPLibrary_Statics::NewProp_KafkaDriverErrorStructure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKafkaBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKafkaBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKafkaBPLibrary_Statics::ClassParams = {
		&UKafkaBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKafkaBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKafkaBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKafkaBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKafkaBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKafkaBPLibrary, 1840057155);
	template<> KAFKA_API UClass* StaticClass<UKafkaBPLibrary>()
	{
		return UKafkaBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKafkaBPLibrary(Z_Construct_UClass_UKafkaBPLibrary, &UKafkaBPLibrary::StaticClass, TEXT("/Script/Kafka"), TEXT("UKafkaBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKafkaBPLibrary);
	void UKafkaDriver::StaticRegisterNativesUKafkaDriver()
	{
	}
	UClass* Z_Construct_UClass_UKafkaDriver_NoRegister()
	{
		return UKafkaDriver::StaticClass();
	}
	struct Z_Construct_UClass_UKafkaDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKafkaDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kafka,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKafkaDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/***************UKafkaDriver*************/" },
		{ "IncludePath", "KafkaBPLibrary.h" },
		{ "ModuleRelativePath", "Public/KafkaBPLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "************UKafkaDriver************" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKafkaDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKafkaDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKafkaDriver_Statics::ClassParams = {
		&UKafkaDriver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKafkaDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKafkaDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKafkaDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKafkaDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKafkaDriver, 779917990);
	template<> KAFKA_API UClass* StaticClass<UKafkaDriver>()
	{
		return UKafkaDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKafkaDriver(Z_Construct_UClass_UKafkaDriver, &UKafkaDriver::StaticClass, TEXT("/Script/Kafka"), TEXT("UKafkaDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKafkaDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
