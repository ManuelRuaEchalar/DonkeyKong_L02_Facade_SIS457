// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstorboProyectiles.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstorboProyectiles : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_L02_API IEstorboProyectiles
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Lanzar() = 0;
};
