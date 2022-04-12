// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroide.generated.h"

UCLASS()
class STARFIGTHER_API AAsteroide : public AActor
{
	GENERATED_BODY()
private:
	float Vida;
	float Tamano;
	float forma;
	float NivelDano;
	float destruirse;
public:	
	// Sets default values for this actor's properties
	AAsteroide();
	float UbicacionX;
	float UbicacionY;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
