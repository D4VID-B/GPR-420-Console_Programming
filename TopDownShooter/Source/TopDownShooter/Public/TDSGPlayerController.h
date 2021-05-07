// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "TDSGPlayerController.generated.h"

class UCharacterMovementComponent;


/**
 * 
 */
UCLASS()
class TOPDOWNSHOOTER_API ATDSGPlayerController : public APlayerController
{
	GENERATED_BODY()


protected:

	float mSprintSpeed;

	bool isSprinting;

	float defaultSpeed;
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
		void setIsSprinting(bool status);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool getIsSprinting();

	UFUNCTION(BlueprintCallable)
		void doSprint(float currentSpeed, UCharacterMovementComponent* playerChar);

	UFUNCTION(BlueprintCallable)
		void setDefaultSpeed(UCharacterMovementComponent* playerChar);
};
