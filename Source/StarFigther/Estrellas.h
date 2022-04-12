// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrellas.generated.h"

UCLASS()
class STARFIGTHER_API AEstrellas : public AActor
{
	GENERATED_BODY()
private:
	float Tamano;
	float forma;
	float fluorecencia;

public:	
	// Sets default values for this actor's properties
	AEstrellas();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
