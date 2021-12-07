// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Math/Vector.h"
#include "Item.h"
#include "BasePlayer.generated.h"

UCLASS()
class MONKEYBALL_API ABasePlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePlayer();

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
		float moveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotSpeed;

	void MoveForward(float value);
	void MoveHorizontal(float value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float jumpImpulse;

	UFUNCTION(BlueprintImplementableEvent)
		void Jump();

	void RotateCameraHorizontal(float value);

	void RotateCameraVertical(float value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector respawnLocation = FVector(0, 0, 120);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UCapsuleComponent* TriggerCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int score;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult);
};
