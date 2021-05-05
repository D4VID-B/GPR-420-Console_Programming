// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
void UMyBlueprintFunctionLibrary::SaveGame()
{
	UGameplayStatics::SaveGameToSlot(SaveGameObject, "scoreSave", 0);
}
void UMyBlueprintFunctionLibrary::LoadGame()
{
	UGameplayStatics::LoadGameFromSlot("scoreSave", 0);
}
