// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MySaveGame.h"
#include "MyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class TOPDOWNSHOOTER_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Save");
	UMySaveGame* SaveGameObject;
	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	void SaveGame();
	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	void LoadGame();
};
