// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPP_W9055613GameMode.h"
#include "GPP_W9055613Character.h"
#include "UObject/ConstructorHelpers.h"

AGPP_W9055613GameMode::AGPP_W9055613GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
