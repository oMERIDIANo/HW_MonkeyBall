// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Floor.generated.h"

UCLASS()
class MONKEYBALL_API AFloor : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Rotation")
		float rotSpeed;

	void RotateHorizontal(float value);

	void RotateVertical(float value);

};
