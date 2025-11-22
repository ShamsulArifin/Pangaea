// Copyright Epic Games, Inc. All Rights Reserved.

#include "PangaeaGameMode.h"
#include "PangaeaPlayerController.h"
#include "PangaeaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APangaeaGameMode::APangaeaGameMode()
{
	PlayerControllerClass = APangaeaPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<APangaeaCharacter> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/BP_PlayerAvatar"));
	if(PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}