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

	// Die after 5 seconds by default
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
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Hit!", false);

		hitPos = this->GetActorLocation();

		FTimerHandle MyTimer;
		FTimerDelegate destroyCubes;
		
		float randomSize = FMath::FRandRange(.06, .2);

		//The faster we go, the bigger the boom
		mExplosionRadius = this->GetVelocity().Size() * randomSize;


		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("Radius will be: %f"), mExplosionRadius), false);

		destroyCubes.BindUFunction(this, FName("DestroyInRadius"), mExplosionRadius);

		//Timer length can't exeed lifetime of projectile!
		GetWorld()->GetTimerManager().SetTimer(MyTimer, destroyCubes, 4, false);
	}
}


void AChargeProjectile::DestroyInFixedRadius()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Timer finished!", false);

	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_WorldDynamic);
	params.AddObjectTypesToQuery(ECC_PhysicsBody);


	FCollisionShape shape;
	shape.SetSphere(mExplosionRadius);

	TArray<FOverlapResult> overlaps;

	GetWorld()->OverlapMultiByObjectType(overlaps, hitPos, FQuat::Identity, params, shape);



	for (FOverlapResult result : overlaps)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, CubeExplosion, result.GetActor()->GetActorLocation());
		result.GetActor()->Destroy();

	}
}

void AChargeProjectile::DestroyInRadius(float radius)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Timer finished!", false);

	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_WorldDynamic);
	params.AddObjectTypesToQuery(ECC_PhysicsBody);


	FCollisionShape shape;
	shape.SetSphere(radius);

	TArray<FOverlapResult> overlaps;

	GetWorld()->OverlapMultiByObjectType(overlaps, hitPos, FQuat::Identity, params, shape);



	for (FOverlapResult result : overlaps)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, CubeExplosion, result.GetActor()->GetActorLocation());
		result.GetActor()->Destroy();

	}
}