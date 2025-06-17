// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TTStatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTTChangeHealthDelegate, float, Health);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TT_SIMPLEINTERFACE_API UTTStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTTStatsComponent();

	UFUNCTION(BlueprintCallable)
	float GetHealth() const;

	UFUNCTION(BlueprintCallable)
	void SetHealth(float Amount);

	UFUNCTION(BlueprintCallable)
	void DecreaseHealth(float Delta);

	UPROPERTY(BlueprintAssignable, Category = TestTask)
	FTTChangeHealthDelegate ChangeHealthDelegate;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	UPROPERTY()
	float CurrentHealth;
		
};
