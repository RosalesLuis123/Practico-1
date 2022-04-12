// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemigo.generated.h"

UCLASS()
class STARFIGTHER_API AEnemigo : public APawn
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
	float disparar;
public:
	// Sets default values for this pawn's properties
	AEnemigo();
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
