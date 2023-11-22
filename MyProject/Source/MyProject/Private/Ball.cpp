// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_radius = 40;
	m_SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = m_SphereComponent;
	m_SphereComponent->InitSphereRadius(m_radius);
	m_SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualSphere"));
	m_SphereMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereMeshAsset.Succeeded())
	{
		m_SphereMesh->SetStaticMesh(SphereMeshAsset.Object);
		m_SphereMesh->SetRelativeLocation(FVector(0.f, 0.f, -m_radius));
		m_SphereMesh->SetWorldScale3D(FVector(0.8f));
	}

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Location = GetActorLocation();
	Location += m_speed;
	////GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("World delta for current frame equals %f,%f,%f"), GetActorForwardVector().X, GetActorForwardVector().Y, GetActorForwardVector().Z));
	SetActorLocation(Location);
}

void ABall::SetRadius(float radius)
{
	m_radius = m_radius;
}

void ABall::SetSpeed(FVector speed)
{
	m_speed = speed;
}

void ABall::SetMass(float mass)
{
	m_mass = mass;
}

float ABall::GetRadius()
{
	return m_radius;
}

FVector ABall::GetSpeed()
{
	return m_speed;
}

float ABall::GetMass()
{
	return m_mass;
}

void ABall::Collision(ABall* ball2)
{
	FVector ball1Position = GetActorLocation() + FVector(m_radius, m_radius, m_radius);
	FVector ball2Position = ball2->GetActorLocation() + FVector(ball2->GetRadius(), ball2->GetRadius(), ball2->GetRadius());
	FVector ball2speed = ball2->GetSpeed();
	float distance = sqrt(pow(ball1Position.X - ball2Position.X, 2) + pow(ball1Position.Y - ball2Position.Y, 2) + pow(ball1Position.Z - ball2Position.Z, 2));
	if (((abs(m_speed.X) > 0.0001f || abs(m_speed.Y > 0.0001f) || abs(m_speed.Z > 0.0001f)) && (abs(ball2speed.X) > 0.0001f || abs(ball2speed.Y) > 0.0001f || abs(ball2speed.Z) > 0.0001f)) && distance >= m_radius * 2)
	{
		MovingCollision(ball1Position, ball2Position, ball2speed, ball2);
	}
	else
	{
		FVector A = { ball2Position.X - ball1Position.X, ball2Position.Y - ball1Position.Y, ball2Position.Z - ball1Position.Z };
		float aLength = sqrt(pow(A.X, 2) + pow(A.Y, 2) + pow(A.Z, 2));
		float cosa = CosOfAngle(A, m_speed);
		float alpha = acos(cosa);
		float d = sin(alpha) * aLength;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), A.X));
		if (d <= m_radius + ball2->GetRadius())
		{
			float temp = pow(m_radius + ball2->GetRadius(), 2) - pow(d, 2);
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), d));
			float e = sqrt(temp);
			float CollisionDistance = cosa * aLength - e;
			if (CollisionDistance >= 0 && CollisionDistance <= sqrt((pow(m_speed.X, 2) + pow(m_speed.Y, 2) + pow(m_speed.Z, 2))))
			{
				float length = sqrt(pow(ball2Position.X - ball1Position.X, 2) + pow(ball2Position.Y - ball1Position.Y, 2) + pow(ball2Position.Z - ball1Position.Z, 2));
				FVector Fd{ (ball2Position.X - ball1Position.X) / length, (ball2Position.Y - ball1Position.Y) / length, (ball2Position.Z - ball1Position.Z) / length };
				float m_speedLength = sqrt(pow(m_speed.X, 2) + pow(m_speed.Y, 2) + pow(m_speed.Z, 2));
				float cosa2 = ((Fd.X * m_speed.X) + (Fd.Y * m_speed.Y) + (Fd.Z * m_speed.Z)) / (m_speedLength);
				float RepLine = cosa2 * sqrt(pow(m_speed.X * m_mass, 2) + pow(m_speed.Y * m_mass, 2) + pow(m_speed.Z * m_mass, 2));
				float V2X = (RepLine * Fd.X)/ball2->GetMass();
				float V2Y = (RepLine * Fd.Y)/ball2->GetMass();
				float V2Z = (RepLine * Fd.Z)/ball2->GetMass();
				FVector V2{ V2X, V2Y, V2Z };
				ball2->SetSpeed(V2);
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), V2X));
				FVector V1{ (m_speed*m_mass - V2*ball2->GetMass())/m_mass};
				SetSpeed(V1);
			}
		}
	}
}

void ABall::MovingCollision(FVector Ball1Pos, FVector Ball2Pos, FVector Ball2Speed, ABall* OtherBall)
{
	float xp = Ball2Pos.X - Ball1Pos.X;
	float yp = Ball2Pos.Y - Ball1Pos.Y;
	float zp = Ball2Pos.Z - Ball1Pos.Z;
	float xv = Ball2Speed.X - m_speed.X;
	float yv = Ball2Speed.Y - m_speed.Y;
	float zv = Ball2Speed.Z - m_speed.Z;
	float a = (pow(xv, 2)) + (pow(yv, 2)) + (pow(zv, 2));
	float b = (2 * xp * xv) + (2 * yp * yv) + (2 * zp * zv);
	float c = (pow(xp, 2) + pow(yp, 2) + pow(zp, 2)) - (pow(m_radius + OtherBall->GetRadius(), 2));
	float t1 = (-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
	float t2 = (-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
	if ((t1 >= 0 && t1 <= 1) || (t2 >= 0 && t2 <= 1))
	{
		float cosA = CosOfAngle((Ball1Pos - Ball2Pos), Ball2Speed);
		float cosB = CosOfAngle((Ball2Pos - Ball1Pos), m_speed);

		float division = sqrt(pow(Ball1Pos.X - Ball2Pos.X, 2) + pow(Ball1Pos.Y - Ball2Pos.Y, 2) + pow(Ball1Pos.Z - Ball2Pos.Z, 2));
		FVector FD1{ (Ball1Pos - Ball2Pos) / division };
		FVector FD2{ -FD1 };
		float v1Length = sqrt(pow(Ball2Speed.X*OtherBall->GetMass(), 2) + pow(Ball2Speed.Y * OtherBall->GetMass(), 2) + pow(Ball2Speed.Z * OtherBall->GetMass(), 2)); // this works out the ball 1 velocity length
		float v2Length = sqrt(pow(m_speed.X*m_mass, 2) + pow(m_speed.Y*m_mass, 2) + pow(m_speed.Z*m_mass, 2));
		FVector f12{ (cosA * v1Length * FD1)/m_mass };
		FVector f21{ (cosB * v2Length * FD2)/OtherBall->GetMass()};
		FVector V2FD{ m_speed + f12 - f21 };
		FVector V1FD{ ((Ball2Speed*OtherBall->GetMass()) + (m_speed*m_mass) - (m_mass*V2FD))/ OtherBall->GetMass() };
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f,%f,%f = Ball2Speed"), Ball2Speed.X, Ball2Speed.Y, Ball2Speed.Z));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f,%f,%f = m_speed"), m_speed.X, m_speed.Y, m_speed.Z));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f,%f,%f = V2FD"), V2FD.X, V2FD.Y, V2FD.Z));
		OtherBall->SetSpeed(V1FD);
		SetSpeed(V2FD);
	}
}

void ABall::SphereToPlane(APlaneObject* Plane)
{
	//const FVector N = Plane->GetActorUpVector();
	const FVector N = Plane->FindNormal();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f,%f,%f = N"), N.X, N.Y, N.Z));
	const FVector h = Plane->GetActorLocation();
	const FVector MyLocation = GetActorLocation() - FVector(m_radius, m_radius, m_radius);
	FVector P{ MyLocation-h};
	float pMag = sqrt(pow(P.X, 2) + pow(P.Y, 2) + pow(P.Z, 2));
	float q1 = acos(CosOfAngle(P,N));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f = q1"), q1));
	float q2 = (PI/2) - q1;
	float d = sin(q2) * pMag;
	float s = CosOfAngle(-N,m_speed);
	float vcMag = (d - m_radius) / s;
	float speedMag = sqrt(pow(m_speed.X, 2) + pow(m_speed.Y, 2) + pow(m_speed.Z, 2));

	if (abs(vcMag) <= speedMag)
	{
		if (acos(s) < (PI / 2))
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Yellow, FString::Printf(TEXT("%f = HIT"), 1.f));
			m_speed = m_speed - FVector{ (m_speed.X) * 2,(m_speed.Y) * 2, (m_speed.Z) * 2 };
		}
	}
}

float ABall::CosOfAngle(FVector A, FVector B)
{
	float ALength = LengthOfVector(A);
	float BLength = LengthOfVector(B);
	float answer = ((A.X * B.X) + (A.Y * B.Y) + (A.Z * B.Z)) / (ALength * BLength);
	return answer;
}

float ABall::LengthOfVector(FVector A)
{
	return sqrt(pow(A.X, 2) + pow(A.Y, 2) + pow(A.Z, 2));
}

