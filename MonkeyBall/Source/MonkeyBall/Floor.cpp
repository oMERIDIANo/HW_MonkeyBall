// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor.h"

// Sets default values
AFloor::AFloor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;
	Mesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFloor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &AFloor::RotateHorizontal);
	InputComponent->BindAxis("Vertical", this, &AFloor::RotateVertical);

}

void AFloor::RotateHorizontal(float value)
{
	FQuat newRotation = FQuat(FRotator(0.f, value * rotSpeed, 0.f));

	AddActorLocalRotation(newRotation, false, 0, ETeleportType::None);
}

void AFloor::RotateVertical(float value)
{
	FQuat newRotation = FQuat(FRotator(value * rotSpeed, 0.f, 0.f));

	AddActorLocalRotation(newRotation, false, 0, ETeleportType::None);
}

