// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAFKA_KafkaActor_generated_h
#error "KafkaActor.generated.h already included, missing '#pragma once' in KafkaActor.h"
#endif
#define KAFKA_KafkaActor_generated_h

#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_10_DELEGATE \
struct _Script_Kafka_eventOnSpeakEvent_Parms \
{ \
	FString str; \
}; \
static inline void FOnSpeakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpeakEvent, const FString& str) \
{ \
	_Script_Kafka_eventOnSpeakEvent_Parms Parms; \
	Parms.str=str; \
	OnSpeakEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_RPC_WRAPPERS
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKafkaActor(); \
	friend struct Z_Construct_UClass_AKafkaActor_Statics; \
public: \
	DECLARE_CLASS(AKafkaActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(AKafkaActor)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAKafkaActor(); \
	friend struct Z_Construct_UClass_AKafkaActor_Statics; \
public: \
	DECLARE_CLASS(AKafkaActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kafka"), NO_API) \
	DECLARE_SERIALIZER(AKafkaActor)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKafkaActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKafkaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKafkaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKafkaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKafkaActor(AKafkaActor&&); \
	NO_API AKafkaActor(const AKafkaActor&); \
public:


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKafkaActor(AKafkaActor&&); \
	NO_API AKafkaActor(const AKafkaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKafkaActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKafkaActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKafkaActor)


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_PRIVATE_PROPERTY_OFFSET
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_12_PROLOG
#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_RPC_WRAPPERS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_INCLASS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_PRIVATE_PROPERTY_OFFSET \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_INCLASS_NO_PURE_DECLS \
	KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KafkaActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KafkaSampleProject_Plugins_Kafka_Source_Kafka_Public_KafkaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
