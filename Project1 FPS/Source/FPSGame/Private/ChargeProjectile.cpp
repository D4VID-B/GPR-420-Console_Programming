// Fill out your copyright notice in the Description page of Project Settings.


#include "ChargeProjectile.h"
#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BombActor.h"
#include "MyCube.h"

// Sets default values
AChargeProjectile::AChargeProjectile()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AChargeProjectile::OnHit);	// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 5000.f;
	ProjectileMovement->MaxSpeed = 5000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 5.0f;

}


// Called when the game starts or when spawned
void AChargeProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChargeProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AChargeProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		//if this was a charged shot, we blow up the cube and return
		//if this wasn't a charge attack, then we just do the normal stuff
		
			UGameplayStatics::SpawnEmitterAtLocation(this, CubeExplosion, OtherActor->GetActorLocation());

			FCollisionObjectQueryParams params;
			params.AddObjectTypesToQuery(ECC_WorldDynamic);
			params.AddObjectTypesToQuery(ECC_PhysicsBody);


			FCollisionShape shape;
			shape.SetSphere(500.0f);

			TArray<FOverlapResult> overlaps;

			GetWorld()->OverlapMultiByObjectType(overlaps, GetActorLocation(), FQuat::Identity, params, shape);

			for (FOverlapResult result : overlaps)
			{

				result.GetActor()->Destroy();

				/*UPrimitiveComponent* overlap = result.GetComponent();
				if (overlap && overlap->IsSimulatingPhysics())
				{

				}*/
			}
		


		//OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

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

		//UMaterialInstanceDynamic* inst = OtherComp->CreateAndSetMaterialInstanceDynamic(0);

		//if (inst)
		//{
		//	inst->SetVectorParameterValue("Color", FLinearColor::MakeRandomColor());
		//}


		Destroy();
	}
}

void AChargeProjectile::SpawnBomb(FVector loc, FRotator rot)
{
	ABombActor* bomb = GetWorld()->SpawnActor<ABombActor>(BombClass, loc, rot);
}

void AChargeProjectile::SpawnCube(FVector loc, FRotator rot, FVector scaleOfCube)
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