// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractParent.h"

// Sets default values
AInteractParent::AInteractParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

