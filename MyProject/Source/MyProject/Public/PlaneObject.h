// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "PlaneObject.generated.h"

UCLASS()
class MYPROJECT_API APlaneObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlaneObject();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector FindNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	UStaticMeshComponent* m_planeMesh;
	UBoxComponent* m_point1;
	UBoxComponent* m_point2;
	UBoxComponent* m_point3;
	float LengthOfVector(FVector A);

};
