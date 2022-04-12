// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CajaPotenciador.generated.h"

UCLASS()
class STARFIGTHER_API ACajaPotenciador : public AActor
{
	GENERATED_BODY()
private:
	float GenerarArma;
	float GenerarEscudo;
	float AumentarVelocidad;
	float AumentarCadencia;
public:	
	// Sets default values for this actor's properties
	ACajaPotenciador();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
