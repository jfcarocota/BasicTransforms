// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"
#include "Bullet.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AWall::OnOverlap);
	
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (health == 0.0f)
	{
		this->Destroy();
	}
}


void AWall::OnOverlap(AActor* me, AActor* other)
{
	ABullet* bullet = Cast<ABullet>(other);
	RecivingDamage(bullet->GetDamage());
	other->Destroy();
}

void AWall::RecivingDamage(float damage)
{
	health = health - damage > 0 ? health - damage : 0.0f;
}

