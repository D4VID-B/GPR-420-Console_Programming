// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
void UMyBlueprintFunctionLibrary::SaveMyGame(UMySaveGame* MySaveGame)
{
	UGameplayStatics::SaveGameToSlot(MySaveGame, "scoreSave", 0);
}
UMySaveGame* UMyBlueprintFunctionLibrary::LoadMyGame()
{
	return (UMySaveGame*)UGameplayStatics::LoadGameFromSlot("scoreSave", 0);
}
