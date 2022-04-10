// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKafka_init() {}
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature();
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature();
	KAFKA_API UFunction* Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Kafka;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Kafka()
	{
		if (!Z_Registration_Info_UPackage__Script_Kafka.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Kafka_OnKafkaMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Kafka_OnKafkaProduceMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Kafka_OnSpeakEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Kafka",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4F7557DB,
				0x235210D5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Kafka.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Kafka.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Kafka(Z_Construct_UPackage__Script_Kafka, TEXT("/Script/Kafka"), Z_Registration_Info_UPackage__Script_Kafka, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4F7557DB, 0x235210D5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
