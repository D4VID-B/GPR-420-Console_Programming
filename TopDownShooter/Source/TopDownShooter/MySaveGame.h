// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Misc/DateTime.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMyStruct
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
        int32 SomeNumber;
    UPROPERTY(BlueprintReadWrite)
        FName Name;
    UPROPERTY(BlueprintReadWrite)
        FDateTime date;
    FMyStruct()
    {

    }
};
UCLASS()
class TOPDOWNSHOOTER_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
public:
		UPROPERTY(BlueprintReadWrite, Category = "Score")
		TArray<FMyStruct> data;
		
};
