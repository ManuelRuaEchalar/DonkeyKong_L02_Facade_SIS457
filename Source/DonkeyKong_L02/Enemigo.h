#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

class ADonkeyKong_L02Character;

UCLASS()
class AEnemigo : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemigo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	/** M�todo para mover el enemigo hacia una ubicaci�n objetivo */
	void BuscarPunto();  // Ahora acepta un FVector como argumento

private:
	/** Referencia al jugador */
	ADonkeyKong_L02Character* PlayerCharacter;

	/** Componente de malla est�tica */
	UPROPERTY(VisibleAnywhere, Category = "Enemigo")
		UStaticMeshComponent* MeshComponent;

	/** Distancia m�nima para detener la persecuci�n */
	UPROPERTY(EditAnywhere, Category = "Movimiento")
		float DistanciaMinima = 100.0f;

	/** Velocidad de persecuci�n */
	UPROPERTY(EditAnywhere, Category = "Movimiento")
		float Velocidad = 300.0f;
};