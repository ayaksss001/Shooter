#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

ABaseGeometryActor::ABaseGeometryActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();

	FString Name = "Kirill Dyakov";

	int KillsNum = 8;
	float Health = 89.23f;
	bool IsDead = false;

	FString KillsStr = "Kills : " + FString::FromInt(KillsNum);
	FString HealthStr = "Health : " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is dead : " + FString(IsDead ? "true" : "false");

	FString Stats = FString::Printf(TEXT("\n ***All Stats***\n %s \n %s\n %s\n", *KillsStr, *HealthStr, *IsDeadStr));
	UE_LOG(LogBaseGeomety, Warning, TEXT("%s"), *Stats);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Name);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Stats, true, FVector2D(1.5f, 1.5f));

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

