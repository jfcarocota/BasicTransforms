// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class BASICTRANSFORMS_API AGun : public AActor
{
	GENERATED_BODY()
	
private:
	void Timer();

	FTimerHandle timerHandle;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float spawnTime;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> spawnObject;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTransform bulletPoint;

	// Sets default values for this actor's properties
	AGun();


};
