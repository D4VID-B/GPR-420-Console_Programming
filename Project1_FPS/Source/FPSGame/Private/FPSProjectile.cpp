// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BombActor.h"
#include "MyCube.h"

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

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

}


void AFPSProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//We recolor the original cube and then also spawn 4 more
	BreakAndRecolorDelegate.AddDynamic(this, &AFPSProjectile::RecolorCube);
	BreakAndRecolorDelegate.AddDynamic(this, &AFPSProjectile::SpawnCube);


	// Only add impulse and destroy projectile if we hit a cube
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		//Used to recolor the hit cube
		mComp = OtherComp;

		//Store a reference to the cube we just hit for later use
		CubeActor = OtherActor;
		
		BreakAndRecolorDelegate.Broadcast();

		Destroy();
	}
}

//Not used in current iteration
void AFPSProjectile::SpawnBomb(FVector loc, FRotator rot)
{
	ABombActor* bomb = GetWorld()->SpawnActor<ABombActor>(BombClass, loc, rot);
}


void AFPSProjectile::SpawnCube()
{
	float scaleValue = 0.5f;

	//Use the CubeActor to set the location/rotation/scale values
	loc = CubeActor->GetActorLocation();
	rot = CubeActor->GetActorRotation();
	scaleOfCube = CubeActor->GetActorScale();

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
		//CubeActor->Destroy();
		AMyCube* cube = GetWorld()->SpawnActor<AMyCube>(CubeClass, newLoc, rot);
		cube->SetActorScale3D(scaleOfCube);
	}

}

void AFPSProjectile::RecolorCube()
{
	if (mComp != NULL)
	{
		UMaterialInstanceDynamic* inst = mComp->CreateAndSetMaterialInstanceDynamic(0);

		if (inst)
		{
			inst->SetVectorParameterValue("Color", FLinearColor::MakeRandomColor());
		}
	}
	
}