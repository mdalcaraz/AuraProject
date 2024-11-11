// Developed by Malcaraz


#include "AbilitySystem/Abilities/AuraFireBolt.h"


FString UAuraFireBolt::GetDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));;
	const float Cooldown = GetCooldown(Level);
	if(Level == 1)
	{
		return FString::Printf(TEXT(
			// Title
			"<Title>Fire Bolt</>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

			// Description
			"<Default>Launched a bolt of fire, exploding on impact an dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with chance to burn</>\n"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			ScaledDamage);
	}
	else
	{
		return FString::Printf(TEXT(
			// Title
			"<Title>Fire Bolt</>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			
			// Number of FireBolts
			"<Default>Launched %d bolts of fire, exploding on impact an dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with chance to burn</>\n"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			ScaledDamage);
	}
}

FString UAuraFireBolt::GetNextLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));;
	const float Cooldown = GetCooldown(Level);

	return FString::Printf(TEXT(
			// Title
			"<Title>NEXT LEVEL: </>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			
			// Number of FireBolts
			"<Default>Launched %d bolts of fire, exploding on impact an dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with chance to burn</>\n"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			ScaledDamage);
}