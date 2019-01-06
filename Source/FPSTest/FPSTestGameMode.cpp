// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPSTestGameMode.h"
#include "FPSTestHUD.h"
#include "FPSTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSTestGameMode::AFPSTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSTestHUD::StaticClass();
}
