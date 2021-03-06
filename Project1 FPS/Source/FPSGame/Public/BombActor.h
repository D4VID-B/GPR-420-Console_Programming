// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombActor.generated.h"


class UStaticMeshComponent;
class UParticleSystem;



UCLASS()
class FPSGAME_API ABombActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombActor();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Bomb")
	float delay;

	UFUNCTION()
	void Explode();

	UPROPERTY(EditDefaultsOnly, Category = "Bomb")
	UParticleSystem* ExplosionTemplate;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* mesh;


	UMaterialInstanceDynamic* matInst;

	FLinearColor color;

	FLinearColor targetColor;



	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
