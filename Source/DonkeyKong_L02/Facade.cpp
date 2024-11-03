// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade.h"
#include "Disparador.h"
#include "Enemigo.h"
#include "ObstaculoMuro.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AFacade::AFacade()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFacade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}


void AFacade::CreateDisparador()
{
    FTransform SpawnLocation;
    SpawnLocation.SetLocation(FVector(1160.0f, 0.0f, 1500.0f));
    ADisparador* disparador = GetWorld()->SpawnActor<ADisparador>(ADisparador::StaticClass(), SpawnLocation);
}

void AFacade::CreateObstaculos()
{
    FTransform SpawnLocation;
    SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 140.0f));
    AObstaculoMuro* obstaculo = GetWorld()->SpawnActor<AObstaculoMuro>(AObstaculoMuro::StaticClass(), SpawnLocation);
}

void AFacade::CreateEnemy()
{
    FTransform SpawnLocation;
    SpawnLocation.SetLocation(FVector(1200.0f, 1350.0f, 5550.0f));
    AEnemigo* enemy = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), SpawnLocation);
}
