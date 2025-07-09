#include "BaseGeometryActor.h"


DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

ABaseGeometryActor::ABaseGeometryActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogBaseGeometry, Display, TEXT("From LogBaseGeometry"))
	
	
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometryActor::printTypes()
{
	int WeaponNums = 4;
	int KillsNum = 8;
	float Health = 89.23f;
	bool IsDead = false;
	bool HasWeapon = true;

	UE_LOG(LogTemp, Display, TEXT("Weapons num: %d , Kills num: %d"), WeaponNums, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("Health: %f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Is dead: %d"), IsDead);
	UE_LOG(LogTemp, Display, TEXT("Has Weapon: %d"), static_cast<int>(HasWeapon));
}

