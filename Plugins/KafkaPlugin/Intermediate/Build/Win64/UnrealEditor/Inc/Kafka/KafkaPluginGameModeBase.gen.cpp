// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kafka/Private/KafkaPluginGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafkaPluginGameModeBase() {}
// Cross Module References
	KAFKA_API UClass* Z_Construct_UClass_AKafkaPluginGameModeBase_NoRegister();
	KAFKA_API UClass* Z_Construct_UClass_AKafkaPluginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Kafka();
// End Cross Module References
	void AKafkaPluginGameModeBase::StaticRegisterNativesAKafkaPluginGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKafkaPluginGameModeBase);
	UClass* Z_Construct_UClass_AKafkaPluginGameModeBase_NoRegister()
	{
		return AKafkaPluginGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKafkaPluginGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Kafka,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KafkaPluginGameModeBase.h" },
		{ "ModuleRelativePath", "Private/KafkaPluginGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKafkaPluginGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::ClassParams = {
		&AKafkaPluginGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKafkaPluginGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AKafkaPluginGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKafkaPluginGameModeBase.OuterSingleton, Z_Construct_UClass_AKafkaPluginGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKafkaPluginGameModeBase.OuterSingleton;
	}
	template<> KAFKA_API UClass* StaticClass<AKafkaPluginGameModeBase>()
	{
		return AKafkaPluginGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKafkaPluginGameModeBase);
	struct Z_CompiledInDeferFile_FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Private_KafkaPluginGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Private_KafkaPluginGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKafkaPluginGameModeBase, AKafkaPluginGameModeBase::StaticClass, TEXT("AKafkaPluginGameModeBase"), &Z_Registration_Info_UClass_AKafkaPluginGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKafkaPluginGameModeBase), 2794448392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Private_KafkaPluginGameModeBase_h_1981823813(TEXT("/Script/Kafka"),
		Z_CompiledInDeferFile_FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Private_KafkaPluginGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KafkaSampleProject_Plugins_KafkaPlugin_Source_Kafka_Private_KafkaPluginGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
