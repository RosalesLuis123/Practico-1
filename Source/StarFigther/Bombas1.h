// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bombas1.generated.h"

UCLASS()
class STARFIGTHER_API ABombas1 : public AActor
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
	ABombas1();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
