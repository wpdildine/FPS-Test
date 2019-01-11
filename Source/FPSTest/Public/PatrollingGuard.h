// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

class AActor;
/**
 * 
 */
UCLASS()
class FPSTEST_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public: 
UPROPERTY(EditAnywhere, Category = "Patrol Points")
	TArray<AActor*> PatrolPoints;

protected:

};
