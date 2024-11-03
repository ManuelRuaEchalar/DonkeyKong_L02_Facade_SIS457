// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstorboEspinas.h"   // Asegúrate de incluir las clases de espinas y trampas
#include "EstorboTrampas.h"
#include "FabricaEstorbos.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFabricaEstorbos : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_L02_API IFabricaEstorbos
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual IEstorboEspinas* CrearEspina() = 0;
	virtual IEstorboTrampas* CrearTrampa() = 0;
};
