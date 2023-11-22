// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaneObject.h"

// Sets default values
APlaneObject::APlaneObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_planeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualPlane"));
	RootComponent = m_planeMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));
	if (PlaneMeshAsset.Succeeded())
	{
		m_planeMesh->SetStaticMesh(PlaneMeshAsset.Object);
		m_planeMesh->SetRelativeLocation(FVector(0.f, 0.f, -0.f));
		m_planeMesh->SetWorldScale3D(FVector(1.f));
	}
	m_point1 = CreateDefaultSubobject<UBoxComponent>("point1");
	m_point1->SetupAttachment(m_planeMesh);
	m_point1->SetWorldScale3D(FVector{ 0.01f,0.01f,0.01f });
	m_point1->SetRelativeLocation(FVector{ -49.f,49.f,0.f });

	m_point2 = CreateDefaultSubobject<UBoxComponent>("point2");
	m_point2->SetupAttachment(m_planeMesh);
	m_point2->SetWorldScale3D(FVector{ 0.01f,0.01f,0.01f });
	m_point2->SetRelativeLocation(FVector{ 49.f,0.f,0.f });

	m_point3 = CreateDefaultSubobject<UBoxComponent>("point3");
	m_point3->SetupAttachment(m_planeMesh);
	m_point3->SetWorldScale3D(FVector{ 0.01f,0.01f,0.01f });
	m_point3->SetRelativeLocation(FVector{ -49.f,-49.f,0.f });
}

// Called when the game starts or when spawned
void APlaneObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlaneObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector APlaneObject::FindNormal()
{
	FVector A = m_point1->GetComponentLocation();
	FVector B = m_point3->GetComponentLocation();
	FVector C = m_point2->GetComponentLocation();
	FVector v1 = B-C;
	FVector v2 = A-C;
	FVector Normal{(v1.Y*v2.Z)-(v1.Z*v2.Y),(v1.X*v2.Z)-(v1.Z*v2.X),(v1.X*v2.Y)-(v1.Y*v2.X)};

	return (Normal/LengthOfVector(Normal));
}
float APlaneObject::LengthOfVector(FVector A)
{
	return sqrt(pow(A.X, 2) + pow(A.Y, 2) + pow(A.Z, 2));
}


