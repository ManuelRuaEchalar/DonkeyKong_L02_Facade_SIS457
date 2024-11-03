// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstorboTrampas.h"
#include "TrampaFuego.generated.h"

UCLASS()
class DONKEYKONG_L02_API ATrampaFuego : public AActor, public IEstorboTrampas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrampaFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ActivarTrampa()override;

};
