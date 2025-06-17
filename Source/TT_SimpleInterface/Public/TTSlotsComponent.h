// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TTSlotsComponent.generated.h"

enum class ESlotType : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTTToggleSlotDelegate, ESlotType, SlotType, bool, SlotState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TT_SIMPLEINTERFACE_API UTTSlotsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTTSlotsComponent();

	UPROPERTY(BlueprintAssignable, Category = TestTask)
	FTTToggleSlotDelegate ToggleSlotDelegate;

	UFUNCTION(BlueprintCallable)
	void ToggleSlot(ESlotType SlotType);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY()
	TMap<ESlotType, bool> Slots;
		
};
