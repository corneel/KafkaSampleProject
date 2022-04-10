// Copyright Epic Games, Inc. All Rights Reserved.
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

#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKafkaDriverErrorStructure_Statics; \
	KAFKA_API static class UScriptStruct* StaticStruct();


template<> KAFKA_API UScriptStruct* StaticStruct<struct FKafkaDriverErrorStructure>();

#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_62_DELEGATE \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_63_DELEGATE \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_SPARSE_DATA
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS \
	virtual void OnKafkaMessage_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
	virtual void OnKafkaProduceEvent_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
 \
	DECLARE_FUNCTION(execGetLastEventNum); \
	DECLARE_FUNCTION(execGetLastErrorCode); \
	DECLARE_FUNCTION(execMakeDriver); \
	DECLARE_FUNCTION(execKafkaConsumeMessage); \
	DECLARE_FUNCTION(execKafkaConsumeMessages); \
	DECLARE_FUNCTION(execCreateKafkaConsumerTopic); \
	DECLARE_FUNCTION(execCreateKafkaConsumer); \
	DECLARE_FUNCTION(execKafkaConsumeAll); \
	DECLARE_FUNCTION(execKafkaProduceMessageEvents); \
	DECLARE_FUNCTION(execKafkaConsumeMessageEvents); \
	DECLARE_FUNCTION(execOnKafkaMessage); \
	DECLARE_FUNCTION(execOnKafkaProduceEvent); \
	DECLARE_FUNCTION(execKafkaProduceMessage); \
	DECLARE_FUNCTION(execKafkaProduceMessages); \
	DECLARE_FUNCTION(execCreateKafkaProducerTopic); \
	DECLARE_FUNCTION(execCreateKafkaProducer); \
	DECLARE_FUNCTION(execKafkaProduceAll);


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnKafkaMessage_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
	virtual void OnKafkaProduceEvent_Implementation(const FString& Message, int32 ErrorCode, EKafkaEventEnumType const& LastKafkaEventEnum); \
 \
	DECLARE_FUNCTION(execGetLastEventNum); \
	DECLARE_FUNCTION(execGetLastErrorCode); \
	DECLARE_FUNCTION(execMakeDriver); \
	DECLARE_FUNCTION(execKafkaConsumeMessage); \
	DECLARE_FUNCTION(execKafkaConsumeMessages); \
	DECLARE_FUNCTION(execCreateKafkaConsumerTopic); \
	DECLARE_FUNCTION(execCreateKafkaConsumer); \
	DECLARE_FUNCTION(execKafkaConsumeAll); \
	DECLARE_FUNCTION(execKafkaProduceMessageEvents); \
	DECLARE_FUNCTION(execKafkaConsumeMessageEvents); \
	DECLARE_FUNCTION(execOnKafkaMessage); \
	DECLARE_FUNCTION(execOnKafkaProduceEvent); \
	DECLARE_FUNCTION(execKafkaProduceMessage); \
	DECLARE_FUNCTION(execKafkaProduceMessages); \
	DECLARE_FUNCTION(execCreateKafkaProducerTopic); \
	DECLARE_FUNCTION(execCreateKafkaProducer); \
	DECLARE_FUNCTION(execKafkaProduceAll);


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_EVENT_PARMS \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKafkaBPLibrary(); \
	friend struct Z_Construct_UClass_UKafkaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKafkaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaBPLibrary)


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUKafkaBPLibrary(); \
	friend struct Z_Construct_UClass_UKafkaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKafkaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaBPLibrary)


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_STANDARD_CONSTRUCTORS \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_ENHANCED_CONSTRUCTORS \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_65_PROLOG \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_EVENT_PARMS


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_SPARSE_DATA \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_SPARSE_DATA \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_CALLBACK_WRAPPERS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_INCLASS_NO_PURE_DECLS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KafkaBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAFKA_API UClass* StaticClass<class UKafkaBPLibrary>();

#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_SPARSE_DATA
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKafkaDriver(); \
	friend struct Z_Construct_UClass_UKafkaDriver_Statics; \
public: \
	DECLARE_CLASS(UKafkaDriver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaDriver)


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUKafkaDriver(); \
	friend struct Z_Construct_UClass_UKafkaDriver_Statics; \
public: \
	DECLARE_CLASS(UKafkaDriver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(UKafkaDriver)


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_STANDARD_CONSTRUCTORS \
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


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKafkaDriver(UKafkaDriver&&); \
	NO_API UKafkaDriver(const UKafkaDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKafkaDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKafkaDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKafkaDriver)


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_177_PROLOG
#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_SPARSE_DATA \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_SPARSE_DATA \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_INCLASS_NO_PURE_DECLS \
	FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAFKA_API UClass* StaticClass<class UKafkaDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Public_KafkaBPLibrary_h


#define FOREACH_ENUM_EKAFKAEVENTENUMTYPE(op) \
	op(EKafkaEventEnumType::NOERROR) \
	op(EKafkaEventEnumType::TIMEDOUT) \
	op(EKafkaEventEnumType::PARTITIONEOF) \
	op(EKafkaEventEnumType::UNKNOWNTOPIC) \
	op(EKafkaEventEnumType::UNKNOWNPARTITION) \
	op(EKafkaEventEnumType::PLUGINERROR) \
	op(EKafkaEventEnumType::OTHERERROR) 

enum class EKafkaEventEnumType : uint8;
template<> KAFKA_API UEnum* StaticEnum<EKafkaEventEnumType>();

#define FOREACH_ENUM_EPLUGINERRORENUMTYPE(op) \
	op(EPluginErrorEnumType::NOERROR) \
	op(EPluginErrorEnumType::DRIVERERROR) \
	op(EPluginErrorEnumType::NOKAFKADRIVER) \
	op(EPluginErrorEnumType::NOKAFKAMODULE) \
	op(EPluginErrorEnumType::NOKAFKACONSUMER) \
	op(EPluginErrorEnumType::NOKAFKAPRODUCER) \
	op(EPluginErrorEnumType::NOKAFKACONSUMERTOPIC) \
	op(EPluginErrorEnumType::NOKAFKAPRODUCERTOPIC) 

enum class EPluginErrorEnumType : uint8;
template<> KAFKA_API UEnum* StaticEnum<EPluginErrorEnumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
