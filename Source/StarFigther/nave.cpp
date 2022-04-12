// Fill out your copyright notice in the Description page of Project Settings.


#include "nave.h"

// Sets default values
Anave::Anave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Anave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Anave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Anave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

