// Fill out your copyright notice in the Description page of Project Settings.


#include "EspinasAfiladas.h"
#include "Engine.h"

// Sets default values
AEspinasAfiladas::AEspinasAfiladas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEspinasAfiladas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEspinasAfiladas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEspinasAfiladas::CausarDano() {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ESPINAS AFILADAS"));
	}
}

