// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"

#include "LoggingActor.generated.h"

UCLASS()
class PROJECT_K_API ALoggingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALoggingActor();
	static void UeLog(const char *msg);
	//void UeLog(const std::string& msg);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
