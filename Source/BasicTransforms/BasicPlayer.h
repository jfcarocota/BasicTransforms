// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicPlayer.generated.h"

UCLASS()
class BASICTRANSFORMS_API ABasicPlayer : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float moveSpeed{};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float rotationSpeed{};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector direction{};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator rotDirection {};

	// Sets default values for this actor's properties
	ABasicPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
