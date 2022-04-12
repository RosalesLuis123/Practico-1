// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Balas.generated.h"

UCLASS()
class STARFIGTHER_API ABalas : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;
	float Tamano;
	float DistanciaMax;
	float UbicacionInicialX;
	float UbicacionInicialY;
	float NivelDano;
public:	
	// Sets default values for this actor's properties
	ABalas();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
