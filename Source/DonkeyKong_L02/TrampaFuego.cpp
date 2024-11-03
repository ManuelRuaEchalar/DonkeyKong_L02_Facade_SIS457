// Fill out your copyright notice in the Description page of Project Settings.
#include "TrampaFuego.h"
#include "Engine.h"


// Sets default values
ATrampaFuego::ATrampaFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrampaFuego::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrampaFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrampaFuego::ActivarTrampa() {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("TRAMPA DE FUEGO"));
	}
}

