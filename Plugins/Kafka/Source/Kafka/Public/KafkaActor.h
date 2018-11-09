// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "KafkaActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpeakEvent, const FString&, str);

UCLASS(BlueprintType, Blueprintable)
class AKafkaActor : public AActor
{


	GENERATED_UCLASS_BODY()
	//DECLARE_EVENT_OneParam(FKafkaActor, FOnKafkaConsumeErrorEvent, KafkaEventEnumType&)
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedEvent, FString&, str);
	
	
	//DECLARE_EVENT_OneParam(AKafkaActor, FChangedEvent, FString&)
	//ECLARE_MULTICAST_DELEGATE_OneParam(FChangedEvent, FString&)
	//UPROPERTY(BlueprintAssignable)
	//FOnKafkaActorErrorEvent OnKafkaActorErrorEvent;
public:

	/*
	Severity	Code	Description	Project	File	Line	Suppression State
	Error		UnrealHeaderTool failed for target 'KafkaPluginEditor' 
	(platform: Win64, module info: C:\Users\corne\Documents\Unreal Projects\KafkaPlugin\Intermediate\Build\Win64\KafkaPluginEditor\Development\KafkaPluginEditor.uhtmanifest, 
	exit code: OtherCompilationError (5)).	KafkaPlugin	C:\Users\corne\Documents\Unreal Projects\KafkaPlugin\Intermediate\ProjectFiles\EXEC	1	

	*/

	UPROPERTY(BlueprintAssignable, BlueprintCallable, meta = (DisplayName = "OnSpeakEvent"))
	FOnSpeakEvent OnSpeakEvent;
	
	// Sets default values for this actor's properties
	//AKafkaActor(const FObjectInitializer& ObjectInitializer);
	AKafkaActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

};
