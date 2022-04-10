// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

#include "KafkaActor.h"
#include "KafkaPluginGameModeBase.h"

AKafkaActor::AKafkaActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//pointerToSelf = this;
}

// Sets default values
AKafkaActor::AKafkaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AKafkaActor::BeginPlay()
{
	//Super::BeginPlay();
	
	//ChangedEvent.AddUFunction(this, "AKafkaActor::Speak(FString& str)");
	//OnSpeakEvent.AddDynamic(this, &AKafkaActor::Speak);

	//auto Gmode = GetWorld()->GetAuthGameMode<APortFolioPrjGameMode>();
	//Gmode->ChangedEvent.AddUObject(this, &AKafkaActor::Speak);
}

// Called every frame
void AKafkaActor::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);
}


