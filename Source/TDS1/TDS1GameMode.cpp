// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDS1GameMode.h"
#include "TDS1PlayerController.h"
#include "TDS1Character.h"
#include "UObject/ConstructorHelpers.h"

ATDS1GameMode::ATDS1GameMode()
{
	// use our custom PlayerController class
	//PlayerControllerClass = ATDS1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	//if (PlayerPawnBPClass.Class != nullptr)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}