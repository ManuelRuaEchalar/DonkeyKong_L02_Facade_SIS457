// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Facade.generated.h"
class AEnemigo;
class ADisparador;
class AObstaculoMuro;

UCLASS()
class DONKEYKONG_L02_API AFacade : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFacade();
	// Function to initialize the disparador
	void CreateDisparador();

	// Function to initialize obstacles
	void CreateObstaculos();

	// Function to initialize the enemy
	void CreateEnemy();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};