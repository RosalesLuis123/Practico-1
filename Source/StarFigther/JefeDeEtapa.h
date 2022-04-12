// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JefeDeEtapa.generated.h"

UCLASS()
class STARFIGTHER_API AJefeDeEtapa : public AActor
{
	GENERATED_BODY()
		float Velocidad;
	float Tamano;
	float forma;
	float Mejorar;
	float RestaVidas;
	float UbicacionX;
	float UbicacionY;
	float disparar;
	float GenerarAliadoEnemigo;
public:	
	// Sets default values for this actor's properties
	AJefeDeEtapa();
	float UbicacionFinalX;
	float UbicacionFinalY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
