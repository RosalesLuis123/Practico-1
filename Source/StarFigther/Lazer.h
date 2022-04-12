// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lazer.generated.h"

UCLASS()
class STARFIGTHER_API ALazer : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;oat Tamano;
	float DistanciaMax;
	float UbicacionInicialX;
	float UbicacionInicialY;
	float NivelDano;
	float Quemadura;
public:	
	// Sets default values for this actor's properties
	ALazer();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
