// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentActor.h"
#include "KnightActor.generated.h"

/**
 * 
 */
UCLASS()
class CHESS_API AKnightActor : public AParentActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AKnightActor();

	/*	Detects selectable grids to move the pawn.
	@param SelectableGrids: Pointer variable to assign selectable grids.
	@param DefaultGrids:	Pointer variable to assign material values of selectable grids.
	*/
	void DetectSelectableGrids(TArray<UStaticMeshComponent*> *SelectableGrids, TArray<UMaterial*> *DefaultMaterials);

	/*	Check overlap for possibly moveable locations. If overlap happens calls AddAndHighlight function.
	@param SpawnLocation:	Location to spawn collision box.
	@param SelectableGrids: Pointer variable to assign selectable grids.
	@param DefaultGrids:	Pointer variable to assign material values of selectable grids.
	*/
	void CheckOverlap(FVector SpawnLocation, TArray<UStaticMeshComponent*> *SelectableGrids, TArray<UMaterial*> *DefaultMaterials);

	/*	Highlights every selectable grids. Also adds grid to SelectableGrids array and their default material to DefaultMaterials array.
	@param	SelectableGrids : For holding overlapped grids. Overlapped grids will be added to this array.
	@param	DefaultMaterials : For holding overlapped grids' materials. Overlapped grids' materials will be added to this array.
	@param	OverlappedActors : Used to pass overlapped actors to this function.
	@param	OverlappedComponents :  Used to pass overlapped components to this function.
	*/
	void AddAndHighlight(TArray<UStaticMeshComponent*> *SelectableGrids, TArray<UMaterial*> *DefaultMaterials, TArray<AActor*> *OverlappedActors, TArray<UPrimitiveComponent*> *OverlappedComponents);

};
