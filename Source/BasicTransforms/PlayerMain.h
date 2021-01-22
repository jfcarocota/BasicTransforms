// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerMain.generated.h"

UCLASS()
class BASICTRANSFORMS_API APlayerMain : public APawn
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere)
	float moveSpeed{ 1.0f };
	UPROPERTY(EditAnywhere)
	float rotSpeed{ 150.0f };
	UPROPERTY(EditAnywhere)
	bool canRotate;

	void VerticalAxis(float axisValue);
	void HorizontalAxis(float axisValue);

public:
	// Sets default values for this pawn's properties
	APlayerMain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
