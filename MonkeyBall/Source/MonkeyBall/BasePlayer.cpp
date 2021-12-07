// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);

	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>("TriggerCapsule");
	TriggerCapsule->SetupAttachment(RootComponent);
	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &ABasePlayer::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (currentLocation.Z < -200)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, "Respawn");
		SetActorLocation(respawnLocation);
	}
}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("ForwardInput", this, &ABasePlayer::MoveForward);
	InputComponent->BindAxis("HorizontalInput", this, &ABasePlayer::MoveHorizontal);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ABasePlayer::Jump);
	InputComponent->BindAxis("Horizontal", this, &ABasePlayer::RotateCameraHorizontal);
	InputComponent->BindAxis("Vertical", this, &ABasePlayer::RotateCameraVertical);
}

void ABasePlayer::MoveForward(float value)
{
	FVector forceToAdd = FVector(1, 0, 0) * moveSpeed * value;
	Mesh->AddForce(forceToAdd);
}

void ABasePlayer::MoveHorizontal(float value)
{
	FVector forceToAdd = FVector(0, 1, 0) * moveSpeed * value;
	Mesh->AddForce(forceToAdd);
}

void ABasePlayer::RotateCameraHorizontal(float value)
{
	FRotator newRotation = FRotator(0, value * rotSpeed, 0);

	SpringArm->AddLocalRotation(newRotation, false, 0, ETeleportType::None);
}

void ABasePlayer::RotateCameraVertical(float value)
{
	FRotator newRotation = FRotator(value * rotSpeed, 0, 0);

	SpringArm->AddLocalRotation(newRotation, false, 0, ETeleportType::None);
}

void ABasePlayer::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	if (Cast <AItem>(OtherActor) != nullptr)
	{
		score += 1;
		if (score == 4)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "You collected all the coins!");
		}
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Coins Collected: %d"), score));
	}
}