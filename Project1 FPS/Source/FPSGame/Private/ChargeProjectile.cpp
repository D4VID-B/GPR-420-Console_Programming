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
		
		FTimerHandle Timer;
		FTimerDelegate d_Timer;

		

		d_Timer.BindUFunction(this, FName("DestroyInRadius"));

		//d_Timer.b (this, FName("DestroyInRadius"), explosionRadius);

		GetWorld()->GetTimerManager().SetTimer(Timer, d_Timer, 5, false);

		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Timer finished!", false);

		Destroy();
	}
}


void AChargeProjectile::DestroyInRadius(/*float radius*/)
{
	float explosionRadius = 500.0f;

	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_WorldDynamic);
	params.AddObjectTypesToQuery(ECC_PhysicsBody);


	FCollisionShape shape;
	shape.SetSphere(explosionRadius);

	TArray<FOverlapResult> overlaps;

	GetWorld()->OverlapMultiByObjectType(overlaps, GetActorLocation(), FQuat::Identity, params, shape);



	for (FOverlapResult result : overlaps)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, CubeExplosion, result.GetActor()->GetActorLocation());
		result.GetActor()->SetActorScale3D(FVector(2, 2, 2));
		//result.GetActor()->Destroy();

	}
}