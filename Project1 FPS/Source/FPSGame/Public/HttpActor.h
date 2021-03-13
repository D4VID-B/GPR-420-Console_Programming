// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpActor.generated.h"

UCLASS()
class FPSGAME_API AHttpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHttpActor();
	FHttpModule* Http;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = "API")
	float delay;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "API")
	FString temperature;

public:
	/*making the api request*/
	UFUNCTION()
	void MyHttpCall();
	/*processing the GET request*/
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
