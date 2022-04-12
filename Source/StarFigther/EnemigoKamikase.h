// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemigoKamikase.generated.h"

UCLASS()
class STARFIGTHER_API AEnemigoKamikase : public APawn
{
	GENERATED_BODY()
private:
	float Velocidad;
	float Tamano;
	float forma;
	float Mejorar;
	float RestaVidas;
	float UbicacionX;
	float UbicacionY;
	float Explotar;
	float Perseguir;

public:
	// Sets default values for this pawn's properties
	AEnemigoKamikase();
	float UbicacionFinalX;
	float UbicacionFinalY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
