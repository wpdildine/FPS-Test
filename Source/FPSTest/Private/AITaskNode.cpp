// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/AITaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "../Public/PatrollingGuard.h"
#include "AIController.h"

EBTNodeResult::Type UAITaskNode::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	auto AIController = OwnerComp.GetAIOwner();

	auto ControlledPawn = AIController->GetPawn();
	auto PatrollingGuard = Cast <APatrollingGuard>(ControlledPawn);
	auto AllPatrolPoints = PatrollingGuard->PatrolPoints;

	//set next way point
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	BlackboardComp->SetValueAsObject(WaypointKey.SelectedKeyName, AllPatrolPoints[Index]);

	auto NextIndex = (Index + 1) % AllPatrolPoints.Num();
	BlackboardComp->SetValueAsInt(IndexKey.SelectedKeyName, NextIndex);
	
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index %i"), Index)
	return EBTNodeResult::Succeeded;
}
