// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEstorbos.h"
#include "EstorboEspinas.h"
#include "EstorboTrampas.h"
#include "GameFramework/Actor.h"
#include "FabricaClasica.generated.h"

UCLASS()
class DONKEYKONG_L02_API AFabricaClasica : public AActor, public IFabricaEstorbos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaClasica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual IEstorboEspinas* CrearEspina() override;
	virtual IEstorboTrampas* CrearTrampa() override;

};
