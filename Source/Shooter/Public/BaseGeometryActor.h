// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"

#include "BaseGeometryActor.generated.h"

UCLASS()
class SHOOTER_API ABaseGeometryActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGeometryActor();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BaseMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Amplitude = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Frequency = 2.0f;

	UPROPERTY(EditAnywhere)
	int WeaponNums = 4;

	UPROPERTY(EditAnywhere)
	int KillsNum = 8;

	UPROPERTY(EditAnywhere)
	float Health = 89.23f;

	UPROPERTY(EditAnywhere)
	bool IsDead = false;

	UPROPERTY(EditAnywhere)
	bool HasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector InitialLocation;
	
	void printTypes();
	void printTransform();

};
