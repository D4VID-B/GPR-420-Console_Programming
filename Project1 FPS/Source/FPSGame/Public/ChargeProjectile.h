// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChargeProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class ABombActor;
class AMyCube;
class UParticleSystem;


UCLASS()
class FPSGAME_API AChargeProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChargeProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Projectile")
		USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovement;


	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		UParticleSystem* CubeExplosion;

	UPROPERTY(VisibleAnywhere, Category = "Explosion")
		bool IsCharged;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/** called when projectile hits something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void DestroyInRadius(float radius);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

};
