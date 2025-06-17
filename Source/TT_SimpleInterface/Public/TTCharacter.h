// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TTCharacter.generated.h"

class UTTSlotsComponent;
class UTTStatsComponent;

UCLASS()
class TT_SIMPLEINTERFACE_API ATTCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATTCharacter();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTTStatsComponent* Stats;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTTSlotsComponent* Slots;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
