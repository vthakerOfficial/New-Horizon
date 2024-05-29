// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HorizonGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NEWHORIZON_API AHorizonGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void pawnKilled(APawn* pawnKilled);
};
