// Copyright Epic Games, Inc. All Rights Reserved.

#include "Atria_UnrealGameMode.h"
#include "Atria_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAtria_UnrealGameMode::AAtria_UnrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
