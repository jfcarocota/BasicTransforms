// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BASICTRANSFORMS_API ABullet : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
	float moveSpeed{};
	UPROPERTY(EditAnywhere)
	FVector direction {};

	// Sets default values for this actor's properties
	ABullet();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetDamage();

private:
	UPROPERTY(EditAnywhere)
	float damage{ 1 };
};
