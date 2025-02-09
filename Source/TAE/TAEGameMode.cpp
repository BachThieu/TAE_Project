// Copyright Epic Games, Inc. All Rights Reserved.

#include "TAEGameMode.h"
#include "TAECharacter.h"
#include "UObject/ConstructorHelpers.h"

ATAEGameMode::ATAEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
