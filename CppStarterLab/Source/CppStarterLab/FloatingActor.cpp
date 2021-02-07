// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"



// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PipeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule"));

	if (CubeVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	cube = CubeVisualAsset.Object;
	pipe = PipeVisualAsset.Object;
	capsule = CapsuleVisualAsset.Object;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (/*Player pressed mouse button*/)
	//{
		//VisualMesh->SetStaticMesh(pipe);
	//}

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * FloatSpeed;          //Scale our height by FloatSpeed
	float DeltaRotation = DeltaTime * RotationSpeed;    //Rotate by a number of degrees equal to RotationSpeed each second
	NewRotation.Yaw += DeltaRotation;
	SetActorLocationAndRotation(NewLocation, NewRotation);
}

