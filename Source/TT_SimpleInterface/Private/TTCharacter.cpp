// Fill out your copyright notice in the Description page of Project Settings.


#include "TTCharacter.h"

#include "TTSlotsComponent.h"
#include "TTStatsComponent.h"

// Sets default values
ATTCharacter::ATTCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Stats = CreateDefaultSubobject<UTTStatsComponent>(TEXT("CharacterStats"));
	Slots = CreateDefaultSubobject<UTTSlotsComponent>(TEXT("CharacterSlots"));

}

// Called when the game starts or when spawned
void ATTCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

