// Fill out your copyright notice in the Description page of Project Settings.


#include "FinishZone.h"
#include "Components/BoxComponent.h"

// Sets default values
AFinishZone::AFinishZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(FName("Collision"));
}

// Called when the game starts or when spawned
void AFinishZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinishZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

