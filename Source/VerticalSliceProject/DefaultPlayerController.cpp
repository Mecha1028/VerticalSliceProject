// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPlayerController.h"
#include "EnhancedInputSubsystems.h"

void ADefaultPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
}