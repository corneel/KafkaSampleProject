// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kafka/Public/KafkaActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaActor() {}
// Cross Module References
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Kafka();
	KAFKA_API UClass* Z_Construct_UClass_AKafkaActor_NoRegister();
	KAFKA_API UClass* Z_Construct_UClass_AKafkaActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics
	{
		struct _Script_Kafka_eventOnSpeakEvent_Parms
		{
			FString str;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Kafka_eventOnSpeakEvent_Parms, str), METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::NewProp_str_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::NewProp_str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KafkaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Kafka, nullptr, "OnSpeakEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Kafka_eventOnSpeakEvent_Parms), Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AKafkaActor::StaticRegisterNativesAKafkaActor()
	{
	}
	UClass* Z_Construct_UClass_AKafkaActor_NoRegister()
	{
		return AKafkaActor::StaticClass();
	}
	struct Z_Construct_UClass_AKafkaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpeakEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeakEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKafkaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Kafka,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKafkaActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KafkaActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KafkaActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKafkaActor_Statics::NewProp_OnSpeakEvent_MetaData[] = {
		{ "Comment", "/*\n\x09Severity\x09""Code\x09""Description\x09Project\x09""File\x09Line\x09Suppression State\n\x09""Error\x09\x09UnrealHeaderTool failed for target 'KafkaPluginEditor' \n\x09(platform: Win64, module info: C:\\Users\\corne\\Documents\\Unreal Projects\\KafkaPlugin\\Intermediate\\Build\\Win64\\KafkaPluginEditor\\Development\\KafkaPluginEditor.uhtmanifest, \n\x09""exit code: OtherCompilationError (5)).\x09KafkaPlugin\x09""C:\\Users\\corne\\Documents\\Unreal Projects\\KafkaPlugin\\Intermediate\\ProjectFiles\\EXEC\x09""1\x09\n\n\x09*/" },
		{ "DisplayName", "OnSpeakEvent" },
		{ "ModuleRelativePath", "Public/KafkaActor.h" },
		{ "ToolTip", "Severity        Code    Description     Project File    Line    Suppression State\nError           UnrealHeaderTool failed for target 'KafkaPluginEditor'\n(platform: Win64, module info: C:\\Users\\corne\\Documents\\Unreal Projects\\KafkaPlugin\\Intermediate\\Build\\Win64\\KafkaPluginEditor\\Development\\KafkaPluginEditor.uhtmanifest,\nexit code: OtherCompilationError (5)).  KafkaPlugin     C:\\Users\\corne\\Documents\\Unreal Projects\\KafkaPlugin\\Intermediate\\ProjectFiles\\EXEC     1" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AKafkaActor_Statics::NewProp_OnSpeakEvent = { "OnSpeakEvent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKafkaActor, OnSpeakEvent), Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AKafkaActor_Statics::NewProp_OnSpeakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKafkaActor_Statics::NewProp_OnSpeakEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKafkaActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKafkaActor_Statics::NewProp_OnSpeakEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKafkaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKafkaActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKafkaActor_Statics::ClassParams = {
		&AKafkaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKafkaActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKafkaActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKafkaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKafkaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKafkaActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKafkaActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKafkaActor, 2752213986);
	template<> KAFKA_API UClass* StaticClass<AKafkaActor>()
	{
		return AKafkaActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKafkaActor(Z_Construct_UClass_AKafkaActor, &AKafkaActor::StaticClass, TEXT("/Script/Kafka"), TEXT("AKafkaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKafkaActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
