// Fill out your copyright notice in the Description page of Project Settings.


#include "TTStatsComponent.h"

// Sets default values for this component's properties
UTTStatsComponent::UTTStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

float UTTStatsComponent::GetHealth() const
{
	return CurrentHealth;
}

void UTTStatsComponent::SetHealth(float Health)
{
	CurrentHealth = Health;
	ChangeHealthDelegate.Broadcast(CurrentHealth);
}

void UTTStatsComponent::DecreaseHealth(float Delta)
{
	SetHealth(CurrentHealth - Delta);
}


// Called when the game starts
void UTTStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	// ...
	
}


// Called every frame
void UTTStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

