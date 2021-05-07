// Fill out your copyright notice in the Description page of Project Settings.


#include "TDSGPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"

ATDSGPlayerController::ATDSGPlayerController(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	mSprintSpeed = 2.0f;

	isSprinting = false;
}

float ATDSGPlayerController::getSprintSpeed()
{
	return mSprintSpeed;
}

void ATDSGPlayerController::setSprintSpeed(float newSpeed)
{
	mSprintSpeed = newSpeed;
}

bool ATDSGPlayerController::getIsSprinting()
{
	return isSprinting;
}

void ATDSGPlayerController::setIsSprinting(bool status)
{
	isSprinting = status;
}

void ATDSGPlayerController::doSprint(float currentSpeed, UCharacterMovementComponent* playerChar)
{
	if (isSprinting)
	{
		playerChar->MaxWalkSpeed = defaultSpeed * mSprintSpeed;
	}
	else
	{
		playerChar->MaxWalkSpeed = defaultSpeed;
	}


}

void ATDSGPlayerController::setDefaultSpeed(UCharacterMovementComponent* playerChar)
{
	defaultSpeed = playerChar->MaxWalkSpeed;
}

//void ATDSGPlayerController::SetupInputComponent()
//{
//	//Super::SetUpInputComonent();
//
//	if (InputComponent)
//	{
//		InputComponent->BindAxis("MoveForward", this, &ATDSGPlayerController::MoveForward);
//		InputComponent->BindAxis("MoveRight", this, &ATDSGPlayerController::MoveRight);
//
//	}
//}
//
//void ATDSGPlayerController::MoveForward(float amount)
//{
//	if (Player != NULL && amount != 0.0f)
//	{
//		const FRotator Rotation = GetControlRotation();
//		const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
//		GetPawn()->AddMovementInput(Direction, amount);
//	}
//}
//
//void ATDSGPlayerController::MoveRight(float amount)
//{
//	const FRotator Rotation = GetControlRotation();
//	const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
//	GetPawn()->AddMovementInput(Direction, amount);
//}
