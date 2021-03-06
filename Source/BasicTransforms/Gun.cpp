// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Engine/World.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	//GetWorld()->SpawnActor<AActor>(spawnObject, GetActorLocation(), GetActorRotation());
	GetWorldTimerManager().SetTimer(timerHandle, this, &AGun::Timer, spawnTime, true, 0.0f);
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGun::Timer()
{
	GetWorld()->SpawnActor<AActor>(spawnObject, GetActorLocation(), GetActorRotation());
}

