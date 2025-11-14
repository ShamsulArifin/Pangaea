// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DefenceTower.generated.h"

UCLASS(Blueprintable)
class PANGAEA_API ADefenceTower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefenceTower();

	UPROPERTY(EditAnywhere, Category = "Tower Params")
	int HealthPoints = 100;

	UPROPERTY(EditAnywhere, Category = "Tower Params")
	int ShellDefence = 2;
	UPROPERTY(EditAnywhere, Category = "Tower Params")
	float AttackRange = 15.0f;

	UPROPERTY(EditAnywhere, Category = "Tower Params")
	float ReloadInterval = 1.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int _HealthPoints;		//The tower's current health points
	float _ReloadCountingDown;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Defence Tower", meta = (AllowPrivateAccess = "True"))
	UBoxComponent* _BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Defence Tower", meta = (AllowPrivateAccess = "True"))
	UStaticMeshComponent* _MeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE UBoxComponent* GetBoxComponent() const
	{
		return _BoxComponent;
	}

	FORCEINLINE UStaticMeshComponent* GetMeshComponent() const
	{
		return _MeshComponent;
	}

	UFUNCTION(BlueprintPure, Category = "Pangaea|Defence Tower", meta = (DisplayName = "Get HP"))
	int GetHealthPoints();

	UFUNCTION(BlueprintPure, Category = "Pangaea|Defence Tower")
	bool IsDestroyed();

	UFUNCTION(BlueprintPure, Category = "Pangaea|Defence Tower")
	bool CanFire();

	void Fire();
	void Hit(int Damge);

protected:
	void DestroyProcess();

};
