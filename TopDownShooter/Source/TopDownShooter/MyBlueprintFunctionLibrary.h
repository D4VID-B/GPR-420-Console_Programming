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
	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	static void SaveMyGame(UMySaveGame* MySaveGame);
	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	static UMySaveGame* LoadMyGame();
};
