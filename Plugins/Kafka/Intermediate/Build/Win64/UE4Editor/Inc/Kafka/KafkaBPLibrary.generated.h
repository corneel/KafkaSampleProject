// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EKafkaEventEnumType : uint8;
class UKafkaDriver;
class UObject;
 
struct FKafkaDriverErrorStructure;
#ifdef KAFKA_KafkaBPLibrary_generated_h
#error "KafkaBPLibrary.generated.h already included, missing '#pragma once' in KafkaBPLibrary.h"
#endif
#define KAFKA_KafkaBPLibrary_generated_h

#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics; \
	KAFKA_API static class UScriptStruct* StaticStruct();


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_63_DELEGATE \
struct _Script_Kafka_eventOnKafkaProduceMessageEvent_Parms \
{ \
	FString Message; \
	int32 ErrorCode; \
	EKafkaEventEnumType LastKafkaEventEnum; \
}; \
static inline void FOnKafkaProduceMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OnKafkaProduceMessageEvent, const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum) \
{ \
	_Script_Kafka_eventOnKafkaProduceMessageEvent_Parms Parms; \
	Parms.Message=Message; \
	Parms.ErrorCode=ErrorCode; \
	Parms.LastKafkaEventEnum=LastKafkaEventEnum; \
	OnKafkaProduceMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_62_DELEGATE \
struct _Script_Kafka_eventOnKafkaMessageEvent_Parms \
{ \
	FString Message; \
	int32 ErrorCode; \
	EKafkaEventEnumType LastKafkaEventEnum; \
}; \
static inline void FOnKafkaMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OnKafkaMessageEvent, const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum) \
{ \
	_Script_Kafka_eventOnKafkaMessageEvent_Parms Parms; \
	Parms.Message=Message; \
	Parms.ErrorCode=ErrorCode; \
	Parms.LastKafkaEventEnum=LastKafkaEventEnum; \
	OnKafkaMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS \
	virtual void OnKafkaMessage_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
	virtual void OnKafkaProduceEvent_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
 \
	DECLARE_FUNCTION(execGetLastEventNum) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EKafkaEventEnumType*)Z_Param__Result=UKafkaBPLibrary::GetLastEventNum(Z_Param_KafkaDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastErrorCode) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKafkaBPLibrary::GetLastErrorCode(Z_Param_KafkaDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDriver) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT_REF(UObject,Z_Param_Out_CreatedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKafkaBPLibrary::MakeDriver(Z_Param_ObjectClass,Z_Param_Out_CreatedObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessage) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessage(Z_Param_KafkaDriver,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessages) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessages(Z_Param_KafkaDriver,Z_Param_Out_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaConsumerTopic) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaConsumer) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray); \
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeAll(Z_Param_Topic,Z_Param_ConfigurationSettings,Z_Param_Out_MessageArray,Z_Param_Out_KafkaErrorStructure); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessageEvents) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceMessageEvents(Z_Param_KafkaDriver,Z_Param_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessageEvents) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_UBOOL(Z_Param_AllMessages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeMessageEvents(Z_Param_KafkaDriver,Z_Param_AllMessages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKafkaMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ErrorCode); \
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKafkaMessage_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKafkaProduceEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ErrorCode); \
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKafkaProduceEvent_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessage) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessage(Z_Param_KafkaDriver,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessages) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessages(Z_Param_KafkaDriver,Z_Param_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaProducerTopic) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaProducer) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceAll(Z_Param_Topic,Z_Param_MessageArray,Z_Param_ConfigurationSettings,Z_Param_Out_KafkaErrorStructure); \
		P_NATIVE_END; \
	}


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnKafkaMessage_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
	virtual void OnKafkaProduceEvent_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
 \
	DECLARE_FUNCTION(execGetLastEventNum) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EKafkaEventEnumType*)Z_Param__Result=UKafkaBPLibrary::GetLastEventNum(Z_Param_KafkaDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastErrorCode) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKafkaBPLibrary::GetLastErrorCode(Z_Param_KafkaDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeDriver) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ObjectClass); \
		P_GET_OBJECT_REF(UObject,Z_Param_Out_CreatedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKafkaBPLibrary::MakeDriver(Z_Param_ObjectClass,Z_Param_Out_CreatedObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessage) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessage(Z_Param_KafkaDriver,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessages) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaConsumeMessages(Z_Param_KafkaDriver,Z_Param_Out_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaConsumerTopic) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaConsumer) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaConsumer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MessageArray); \
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeAll(Z_Param_Topic,Z_Param_ConfigurationSettings,Z_Param_Out_MessageArray,Z_Param_Out_KafkaErrorStructure); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessageEvents) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceMessageEvents(Z_Param_KafkaDriver,Z_Param_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaConsumeMessageEvents) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_UBOOL(Z_Param_AllMessages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaConsumeMessageEvents(Z_Param_KafkaDriver,Z_Param_AllMessages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKafkaMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ErrorCode); \
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKafkaMessage_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKafkaProduceEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ErrorCode); \
		P_GET_ENUM_REF(EKafkaEventEnumType,Z_Param_Out_LastKafkaEventEnum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKafkaProduceEvent_Implementation(Z_Param_Message,Z_Param_ErrorCode,(EKafkaEventEnumType&)(Z_Param_Out_LastKafkaEventEnum)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessage) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessage(Z_Param_KafkaDriver,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceMessages) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::KafkaProduceMessages(Z_Param_KafkaDriver,Z_Param_MessageArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaProducerTopic) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducerTopic(Z_Param_KafkaDriver,Z_Param_Topic,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateKafkaProducer) \
	{ \
		P_GET_OBJECT(UKafkaDriver,Z_Param_KafkaDriver); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKafkaBPLibrary::CreateKafkaProducer(Z_Param_KafkaDriver,Z_Param_ConfigurationSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKafkaProduceAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Topic); \
		P_GET_TARRAY(FString,Z_Param_MessageArray); \
		P_GET_TMAP(FString,FString,Z_Param_ConfigurationSettings); \
		P_GET_STRUCT_REF(FKafkaDriverErrorStructure,Z_Param_Out_KafkaErrorStructure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KafkaProduceAll(Z_Param_Topic,Z_Param_MessageArray,Z_Param_ConfigurationSettings,Z_Param_Out_KafkaErrorStructure); \
		P_NATIVE_END; \
	}


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_EVENT_PARMS \
	struct KafkaBPLibrary_eventOnKafkaMessage_Parms \
	{ \
		FString Message; \
		int32 ErrorCode; \
		EKafkaEventEnumType LastKafkaEventEnum; \
	}; \
	struct KafkaBPLibrary_eventOnKafkaProduceEvent_Parms \
	{ \
		FString Message; \
		int32 ErrorCode; \
		EKafkaEventEnumType LastKafkaEventEnum; \
	};


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKafkaBPLibrary(); \
	friend struct Z_Construct_UClass_UKafkaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKafkaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaBPLibrary)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUKafkaBPLibrary(); \
	friend struct Z_Construct_UClass_UKafkaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKafkaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaBPLibrary)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKafkaBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKafkaBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKafkaBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKafkaBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKafkaBPLibrary(UKafkaBPLibrary&&); \
	NO_API UKafkaBPLibrary(const UKafkaBPLibrary&); \
public:


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKafkaBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKafkaBPLibrary(UKafkaBPLibrary&&); \
	NO_API UKafkaBPLibrary(const UKafkaBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKafkaBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKafkaBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKafkaBPLibrary)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_PRIVATE_PROPERTY_OFFSET
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_65_PROLOG \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_EVENT_PARMS


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KafkaBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS_NO_PURE_DECLS
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKafkaDriver(); \
	friend struct Z_Construct_UClass_UKafkaDriver_Statics; \
public: \
	DECLARE_CLASS(UKafkaDriver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaDriver)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUKafkaDriver(); \
	friend struct Z_Construct_UClass_UKafkaDriver_Statics; \
public: \
	DECLARE_CLASS(UKafkaDriver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaDriver)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKafkaDriver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKafkaDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKafkaDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKafkaDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKafkaDriver(UKafkaDriver&&); \
	NO_API UKafkaDriver(const UKafkaDriver&); \
public:


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKafkaDriver(UKafkaDriver&&); \
	NO_API UKafkaDriver(const UKafkaDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKafkaDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKafkaDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKafkaDriver)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_PRIVATE_PROPERTY_OFFSET
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_177_PROLOG
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaBPLibrary_h


#define FOREACH_ENUM_EPLUGINERRORENUMTYPE(op) \
	op(EPluginErrorEnumType::NOERROR) \
	op(EPluginErrorEnumType::DRIVERERROR) \
	op(EPluginErrorEnumType::NOKAFKADRIVER) \
	op(EPluginErrorEnumType::NOKAFKAMODULE) \
	op(EPluginErrorEnumType::NOKAFKACONSUMER) \
	op(EPluginErrorEnumType::NOKAFKAPRODUCER) \
	op(EPluginErrorEnumType::NOKAFKACONSUMERTOPIC) \
	op(EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC) 
#define FOREACH_ENUM_EKAFKAEVENTENUMTYPE(op) \
	op(EKafkaEventEnumType::NOERROR) \
	op(EKafkaEventEnumType::TIMEDOUT) \
	op(EKafkaEventEnumType::PARTITIONEOF) \
	op(EKafkaEventEnumType::UNKNOWNTOPIC) \
	op(EKafkaEventEnumType::UNKNOWNPARTITION) \
	op(EKafkaEventEnumType::PLUGINERROR) \
	op(EKafkaEventEnumType::OTHERERROR) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
