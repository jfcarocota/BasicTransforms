// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMain.h"
//#include "Components/InputComponent.h"

// Sets default values
APlayerMain::APlayerMain()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerMain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerMain::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("Vertical", this, &APlayerMain::VerticalAxis);
	InputComponent->BindAxis("Horizontal", this, &APlayerMain::HorizontalAxis);
}


void APlayerMain::VerticalAxis(float axisValue)
{
	AddActorLocalOffset(FVector(axisValue, 0, 0) * moveSpeed * GetWorld()->GetDeltaSeconds());
}

void APlayerMain::HorizontalAxis(float axisValue)
{
	AddActorLocalOffset(FVector(0, axisValue, 0) * moveSpeed * GetWorld()->GetDeltaSeconds());
}