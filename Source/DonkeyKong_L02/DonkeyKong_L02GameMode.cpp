// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_L02GameMode.h"
#include "DonkeyKong_L02Character.h"
#include "Facade.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoMuro.h"
#include "Capsula.h"
#include "componentePlataforma.h"
#include "Barril.h"
#include "Esfera.h"
#include "FabricaEstorbos.h"
#include "FabricaClasica.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Disparador.h"
#include "TrampaFuego.h"
#include "EspinasAfiladas.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroEnvenenado.h"
#include "MuroLadrillo.h"
#include "Inventario.h"

ADonkeyKong_L02GameMode::ADonkeyKong_L02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;

	}
}

void ADonkeyKong_L02GameMode::BeginPlay()
{
	Super::BeginPlay();


	ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (MyCharacter)
	{
		// Establecer la nueva posici�n
		FVector NewLocation = FVector(1160.0f, 1300.0f, 5500.0f);
		MyCharacter->SetActorLocation(NewLocation);
	}

	// Spawn the Facade
	FTransform facadeLocation;
	AFacade* facade = GetWorld()->SpawnActor<AFacade>(AFacade::StaticClass(), facadeLocation);

	// Use Facade to create objects
	if (facade)
	{
		facade->CreateDisparador();
		facade->CreateObstaculos();
		facade->CreateEnemy();
	}

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Creando plataforma"));
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 140.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	obstaculo01 = GetWorld()->SpawnActor<AObstaculoMuro>(AObstaculoMuro::StaticClass(), SpawnLocation);
	/*if (player01 != nullptr)
	{
		player01->SetObstaculo(obstaculo01);
	}*/

	for (int32 i = 0; i < 5; ++i) {
		aComponentesPlataformaMoviles.Add(FMath::RandRange(2, 7)); // Genera un n�mero entre 2 y 7
	}

	FVector posicionInicial = FVector(1160.0f, -1300.0f, 800.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationCP;
	float anchoComponentePlataforma = 300.0f;

	float incrementoAltoComponentePlataforma = 55.0f;
	float incrementoAltoEntrePisos = 500.0f;
	float incrementoInicioPiso = 100.0f;
	float incrementoAnchoComponentePlataforma = -300.0f;

	int numeroPisoComponentePlataformaMovil = 0;
	int numeroComponentePlataformaMovil = 4;


	//npp -> N�mero de pisos por plataforma
	for (int npp = 0; npp < 5; npp++) {
		rotacionInicial.Roll = rotacionInicial.Roll * -1;
		incrementoInicioPiso = incrementoInicioPiso * -1;
		incrementoAnchoComponentePlataforma = incrementoAnchoComponentePlataforma * -1;
		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
		SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));

		for (int ncp = 0; ncp < 10; ncp++) {

			if (ncp != (aComponentesPlataformaMoviles[npp] - 1) && ncp != (aComponentesPlataformaMoviles[npp] + 1)) {
				AcomponentePlataforma* cp = GetWorld()->SpawnActor<AcomponentePlataforma>(AcomponentePlataforma::StaticClass(), SpawnLocationCP);
				if (ncp == aComponentesPlataformaMoviles[npp]) {
					if (FMath::RandRange(0, 1))
						cp->setbMoverHorizontalmente(true);
					else
						cp->setbMoverVerticalmente(true);
				}
			}
			posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
			if (ncp < 9) {
				posicionInicial.Y = posicionInicial.Y + incrementoAnchoComponentePlataforma;
			}

			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));

		}

		posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
		posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;
	}

	FVector posicionDisparador = FVector(1160.0f, 0.0f, 1500.f);
	FRotator rotacionDisparador = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationDisparador;
	SpawnLocationDisparador.SetRotation(FQuat(rotacionDisparador));
	SpawnLocationDisparador.SetLocation(posicionDisparador);

	FVector posicionFabrica = FVector(1160.0f, 0.0f, 1500.f);
	FRotator rotacionFabrica = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationFabrica;
	SpawnLocationFabrica.SetRotation(FQuat(rotacionFabrica));
	SpawnLocationFabrica.SetLocation(posicionFabrica);
	AFabricaClasica* fabrica = GetWorld()->SpawnActor<AFabricaClasica>(AFabricaClasica::StaticClass(), SpawnLocationDisparador);

	IEstorboEspinas* tempEspinas = fabrica->CrearEspina();
	IEstorboTrampas* tempTrampa = fabrica->CrearTrampa();

	// Verifica que el casting fue exitoso
	if (tempEspinas) {
		// L�gica espec�fica para espinas
		tempEspinas->CausarDano(); // Ejemplo de uso de una funci�n espec�fica
	}

	if (tempTrampa) {
		// L�gica espec�fica para la trampa de fuego
		tempTrampa->ActivarTrampa(); // Ejemplo de uso de una funci�n espec�fica
	}

	FVector posicionMuro = FVector(1160.0f, 0.0f, 200.f);
	FRotator rotacionMuro = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationMuro;
	SpawnLocationMuro.SetRotation(FQuat(rotacionMuro));
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroElectrico* me01 = GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), SpawnLocationMuro);

	aMuros.Add(me01);

	posicionMuro.Y = 300.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroEnvenenado* me02 = GetWorld()->SpawnActor<AMuroEnvenenado>(AMuroEnvenenado::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me02);

	posicionMuro.Y = 500.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroLadrillo* me03 = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me03);


	GetWorld()->GetTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_L02GameMode::SpawnBarril, 3.0f, true);

	//Crear 4 Inventario
	for (int i = 0; i <= 4; i++)
	{
		AInventario* inventarioSpawneado = GetWorld()->SpawnActor<AInventario>(AInventario::StaticClass());
		if (inventarioSpawneado)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one
			//and log the success string
			inventario = inventarioSpawneado;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ha sido creado"), *inventario->GetName()));
		}
	}
}


void ADonkeyKong_L02GameMode::SpawnBarril()
{
	//if (barriles.Num() >= numeroMaximoBarriles) {
	if (contadorBarriles < numeroMaximoBarriles) {
		//Spawn de un objeto barril en la escena sobre la primera plataforma
		FTransform SpawnLocationBarril;
		SpawnLocationBarril.SetLocation(FVector(1160.0f, 900.0f, 860.0f));
		SpawnLocationBarril.SetRotation(FQuat(FRotator(90.0f, 0.0f, 0.0f)));
		//ABarril* barril01 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril);
		barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril));
		contadorBarriles++;

		if (contadorBarriles >= numeroMaximoBarriles) {
			GetWorld()->GetTimerManager().ClearTimer(SpawnBarrilTimerHandle);
		}
	}
}