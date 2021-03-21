// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BombActor.h"
#include "MyCube.h"
#include "HttpActor.h"

AFPSProjectile::AFPSProjectile()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);	// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;


	/*AActor* FoundActor;
	FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), HttpClass);
	if (FoundActor)
	{
		httpActor = (AHttpActor*)FoundActor;
		httpActor->MyHttpCall();
		windValue = httpActor->GetCurrentWindSpeed();
	}*/
	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 1500.0f;
	ProjectileMovement->MaxSpeed = 5000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
	
}

void AFPSProjectile::BeginPlay()
{
	AActor* FoundActor;
	FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), HttpClass);
	if (FoundActor)
	{
		httpActor = (AHttpActor*)FoundActor;
		windValue = httpActor->GetCurrentWindSpeed();
	}
	FVector test = FVector(RootComponent->ComponentVelocity.X + (float)windValue * 250.0f, RootComponent->ComponentVelocity.Y, RootComponent->ComponentVelocity.Z);
	//CollisionComp->AddImpulse(test, NAME_None);
	//RootComponent->ComponentVelocity = RootComponent->ComponentVelocity + test;
	ProjectileMovement->SetVelocityInLocalSpace(test);
	//ProjectileMovement->ComputeAcceleration(test, 0.5f);
	Super::BeginPlay();
}

void AFPSProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AActor* FoundActor;
	FoundActor = UGameplayStatics::GetActorOfClass(GetWorld(), HttpClass);
	if (FoundActor)
	{
		httpActor = (AHttpActor*)FoundActor;
		tempValue = httpActor->GetCurrentTemp();
	}
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		/*
		* prototyping
		* else
		* {
		*	for(int i = 0; i < 4; i++)
		*	{
		*		SpawnCube(OtherActor->GetActorLocation, OtherActor->GetActorRotation);
		*	}
		*
		* }
		*/

		//if (OtherComp->GetComponentScale().GetMin() < 1.26f)
		//{
		//	//Delet the cube:
		//	OtherActor->Destroy();

		//	UGameplayStatics::SpawnEmitterAtLocation(this, CubeExplosion, OtherActor->GetActorLocation());
		//}
		//else
		//{
		//	//OtherComp->SetWorldScale3D(OtherComp->GetComponentScale() * 0.8f);
		//	OtherActor->Destroy();

		//	SpawnCube(OtherActor->GetActorLocation(), OtherActor->GetActorRotation(), OtherActor->GetActorScale());
		//}

		UMaterialInstanceDynamic* inst = OtherComp->CreateAndSetMaterialInstanceDynamic(0);

		if (inst)
		{
			inst->SetVectorParameterValue("Color", FLinearColor(0.75f, (float)(tempValue*0.005f),0.25f,1.0f));
		}


		Destroy();
	}
}

void AFPSProjectile::SpawnBomb(FVector loc, FRotator rot)
{
	ABombActor* bomb = GetWorld()->SpawnActor<ABombActor>(BombClass, loc, rot);
}

void AFPSProjectile::SpawnCube(FVector loc, FRotator rot, FVector scaleOfCube)
{
	float scaleValue = 0.5f;
	scaleOfCube = scaleOfCube.operator*= (scaleValue);
	FVector newLoc = loc;

	for (int i = 0; i < 4; i++)
	{
		if (i != 0)
		{
			float newX = loc.X + (75.0 * i);
			float newY = loc.Y + (75.0 * i);
			float newZ = loc.Z + (25.0 * i);
			newLoc = FVector(newX, newY, newZ);
		}
		AMyCube* cube = GetWorld()->SpawnActor<AMyCube>(CubeClass, newLoc, rot);
		cube->SetActorScale3D(scaleOfCube);
	}

}
