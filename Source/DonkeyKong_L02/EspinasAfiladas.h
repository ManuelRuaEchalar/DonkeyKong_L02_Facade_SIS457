// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstorboEspinas.h"
#include "EspinasAfiladas.generated.h"

UCLASS()
class DONKEYKONG_L02_API AEspinasAfiladas : public AActor, public IEstorboEspinas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEspinasAfiladas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void CausarDano() override;

};
