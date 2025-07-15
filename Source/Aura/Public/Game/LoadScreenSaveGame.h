// Developed by Malcaraz

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/SaveGame.h"
#include "LoadScreenSaveGame.generated.h"

/**
 * 
 */

class UGameplayAbility;

UENUM(BlueprintType)
enum ESaveSlotStatus
{
	Vacant,
	EnterName,
	Taken
};

USTRUCT(BlueprintType)
struct FSavedAbility
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Class Defaults")
	TSubclassOf<UGameplayAbility> GameplayAbility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTag AbilityTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTag AbilityStatus;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTag AbilitySlot;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTag AbilityType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 AbilityLevel;
};

UCLASS()
class AURA_API ULoadScreenSaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FString SlotName = FString();

	UPROPERTY()
	int32 SlotIndex = 0;

	UPROPERTY()
	FString PlayerName = FString("Default Name");
	
	UPROPERTY()
	FString MapName = FString("Default Map Name");

	UPROPERTY()
	FName PlayerStartTag;
	
	UPROPERTY()
	TEnumAsByte<ESaveSlotStatus> SaveSlotStatus = ESaveSlotStatus::Vacant;

	/* Player */

	UPROPERTY()
	int32 PlayerLevel = 1;

	UPROPERTY()
	int32 XP = 0;

	UPROPERTY()
	int32 SpellPoints = 0;
	
	UPROPERTY()
	int32 AttributePoints = 0;

	UPROPERTY()
	bool bFirstTimeLoadIn = true;

	/* Attributes */

	UPROPERTY()
	float Strength = 0;

	UPROPERTY()
	float Intelligence = 0;

	UPROPERTY()
	float Resilience = 0;

	UPROPERTY()
	float Vigor = 0;

	/* Abilities */

	UPROPERTY()
	TArray<FSavedAbility> SaveAbilities;
};
