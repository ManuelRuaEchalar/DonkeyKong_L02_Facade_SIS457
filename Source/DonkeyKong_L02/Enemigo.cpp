#include "Enemigo.h"
#include "DonkeyKong_L02Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"  // Para mensajes de depuraci�n

AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	Velocidad = 600.0f;  // O el valor que prefieras
	GetCharacterMovement()->MaxWalkSpeed = Velocidad;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule"));
	if (MeshAsset.Succeeded() && MeshComponent)
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("MESH ENEMIGO ASIGNADA"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Error al cargar StaticMesh o MeshComponent no inicializado"));
	}
	if (MeshComponent)
	{
		MeshComponent->SetupAttachment(RootComponent);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Error al crear MeshComponent"));
	}
}

void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacter = Cast<ADonkeyKong_L02Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, TEXT("BeginPlay del Enemigo llamado."));
}

void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PuntoObjetivo = FVector(1160.0f, 0.0f, 1500.0f);
	float DistanciaAlPuntoObjetivo = 300.0f;  // Distancia en la que el jugador activa al enemigo

	if (PlayerCharacter)
	{
		float DistanciaAlJugadorDesdeObjetivo = FVector::Dist(PlayerCharacter->GetActorLocation(), PuntoObjetivo);
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::Printf(TEXT("Distancia al jugador: %f"), DistanciaAlJugadorDesdeObjetivo));

		if (DistanciaAlJugadorDesdeObjetivo <= DistanciaAlPuntoObjetivo)
		{
			BuscarPunto();
		}
	}
}

void AEnemigo::BuscarPunto()
{
	// Obtener la ubicaci�n actual del enemigo
	FVector UbicacionActual = GetActorLocation();

	// Primer movimiento: mover 300 unidades hacia la derecha (eje X)
	FVector NuevaUbicacion = UbicacionActual + FVector(-40.0f, -1350.0f, -3000.0f);
	SetActorLocation(NuevaUbicacion);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enemigo se movi� 300 unidades hacia la derecha"));

	// Actualizar la ubicaci�n despu�s del primer movimiento
	UbicacionActual = GetActorLocation();

	// Segundo movimiento: mover 200 unidades hacia abajo (eje Z)
	NuevaUbicacion = UbicacionActual + FVector(0.0f, 0.0f, -1000.0f);
	SetActorLocation(NuevaUbicacion);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Enemigo se movi� 200 unidades hacia abajo"));
}