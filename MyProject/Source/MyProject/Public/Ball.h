// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "PlaneObject.h"
#include <cmath>
#include "Ball.generated.h"

UCLASS()
class MYPROJECT_API ABall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABall();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetRadius(float radius);
	void SetSpeed(FVector speed);
	void SetMass(float mass);
	float GetRadius();
	UFUNCTION(BlueprintCallable)
	FVector GetSpeed();
	float GetMass();
	UFUNCTION(BlueprintCallable)
	void Collision(ABall* ball2);
	void MovingCollision(FVector Ball1Pos, FVector Ball2Pos, FVector Ball2Speed, ABall* OtherBall);
	UFUNCTION(BlueprintCallable)
	void SphereToPlane(APlaneObject* Plane);
	float CosOfAngle(FVector A, FVector B);
	FVector m_position;
	float LengthOfVector(FVector A);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* m_SphereMesh;
	USphereComponent* m_SphereComponent;
	UPROPERTY(EditAnywhere)
	float m_radius;
	UPROPERTY(EditAnywhere)
	FVector m_speed;
	UPROPERTY(EditAnywhere)
	float m_mass;
};