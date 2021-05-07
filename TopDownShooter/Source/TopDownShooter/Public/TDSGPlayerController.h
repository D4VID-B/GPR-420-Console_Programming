// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TDSGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNSHOOTER_API ATDSGPlayerController : public APlayerController
{
	GENERATED_BODY()


protected:

	float mSprintSpeed;

	//virtual void SetupInputComponent() override;

	//void MoveForward(float amount);

	//void MoveRight(float amount);

public:

	ATDSGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable)
		void setSprintSpeed(float newSpeed);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		float getSprintSpeed();

	UFUNCTION(BlueprintCallable)
		void doSprint(float currentSpeed, UPlayer playerChar);
};
