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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
		USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovement;

	UFUNCTION()
	void SpawnBomb(FVector loc, FRotator rot);

	UFUNCTION()
	void SpawnCube();

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		UParticleSystem* CubeExplosion;

	//Reference materials:
	//https://www.youtube.com/watch?v=xe7wNsxXExg&ab_channel=DevmanAndrew 
	//https://docs.unrealengine.com/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/Multicast/index.html

	//The idea is to use this delegate to both break up the cubes, but to also then recolor them - combining the 2 effects from the previous project
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitDelegate);

	//DECLARE

	UPROPERTY() //BlueprintAssignable, Category = "Delegates"
	FOnHitDelegate BreakAndRecolorDelegate;

	//Delegate work-around stuff
	UPrimitiveComponent* mComp;

	AActor* CubeActor;

	FVector loc;
	FRotator rot;
	FVector scaleOfCube;


public:

	AFPSProjectile();

	UFUNCTION()
	void RecolorCube();

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

