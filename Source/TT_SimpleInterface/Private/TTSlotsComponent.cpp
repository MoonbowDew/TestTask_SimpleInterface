// Fill out your copyright notice in the Description page of Project Settings.


#include "TTSlotsComponent.h"

// Sets default values for this component's properties
UTTSlotsComponent::UTTSlotsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UTTSlotsComponent::ToggleSlot(ESlotType SlotType)
{
	bool State = Slots.FindRef(SlotType);
	Slots.Add(SlotType, !State);
	ToggleSlotDelegate.Broadcast(SlotType, !State);
}

// Called when the game starts
void UTTSlotsComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTTSlotsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

