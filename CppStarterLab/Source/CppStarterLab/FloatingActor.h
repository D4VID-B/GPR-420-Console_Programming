// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Math/UnrealMathUtility.h>
#include <math.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"



UENUM()
enum Shapes
{
	cube	UMETA(DisplayName = "Cube"),
	pipe	UMETA(DisplayName = "Pipe"),
	capsule	UMETA(DisplayName = "Capsule")
};

UCLASS()
class CPPSTARTERLAB_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		UStaticMeshComponent* VisualMesh;

	UStaticMesh* cube;
	UStaticMesh* pipe;
	UStaticMesh* capsule;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float FloatSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		float RotationSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingActor")
		TEnumAsByte<Shapes> meshShapes;
};
