// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"


class UProjectileMovementComponent;
class USphereComponent;
class ABombActor;
class AMyCube;
class UParticleSystem;

UCLASS()
class AFPSProjectile : public AActor
{
	GENERATED_BODY()

protected:

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Projectile")
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovement;


	void SpawnBomb(FVector loc, FRotator rot);
	
	void SpawnCube(FVector loc, FRotator rot, FVector scaleOfCube);

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		UParticleSystem* CubeExplosion;

	UPROPERTY(VisibleAnywhere, Category = "Explosion")
		bool IsCharged;

public:

	AFPSProjectile();

	AFPSProjectile(bool isCharged);

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditDefaultsOnly, Category = "Bomb")
	TSubclassOf<ABombActor> BombClass;

	UPROPERTY(EditDefaultsOnly, Category = "Cube")
	TSubclassOf<AMyCube> CubeClass;
	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

