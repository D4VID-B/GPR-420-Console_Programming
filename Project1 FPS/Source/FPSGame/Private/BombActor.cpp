// Fill out your copyright notice in the Description page of Project Settings.


#include "BombActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ABombActor::ABombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	RootComponent = mesh;

	delay = 2.0f;

}

// Called when the game starts or when spawned
void ABombActor::BeginPlay()
{
	Super::BeginPlay();
	

	FTimerHandle Explode_TimerHandle;
	GetWorldTimerManager().SetTimer(Explode_TimerHandle, this, &ABombActor::Explode, delay);

	matInst = mesh->CreateAndSetMaterialInstanceDynamic(0);

	if (matInst)
	{
		color = matInst->K2_GetVectorParameterValue("Color");
	}

	targetColor = FLinearColor::MakeRandomColor();
}

// Called every frame
void ABombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (matInst)
	{
		float progress = (GetWorld()->TimeSeconds - CreationTime) / delay;

		FLinearColor NewColor = FLinearColor::LerpUsingHSV(color, targetColor, progress);

		matInst->SetVectorParameterValue("Color", NewColor);
	}

}

void ABombActor::Explode()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionTemplate, GetActorLocation());

	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_WorldDynamic);
	params.AddObjectTypesToQuery(ECC_PhysicsBody);


	FCollisionShape shape;
	shape.SetSphere(500.0f);

	TArray<FOverlapResult> overlaps;

	GetWorld()->OverlapMultiByObjectType(overlaps, GetActorLocation(), FQuat::Identity, params, shape);

	for (FOverlapResult result : overlaps)
	{
		UPrimitiveComponent* overlap = result.GetComponent();
		if (overlap && overlap->IsSimulatingPhysics())
		{
			UMaterialInstanceDynamic* inst = overlap->CreateAndSetMaterialInstanceDynamic(0);
			if (inst)
			{
				inst->SetVectorParameterValue("Color", targetColor);
			}
		}
	}

	Destroy();
}