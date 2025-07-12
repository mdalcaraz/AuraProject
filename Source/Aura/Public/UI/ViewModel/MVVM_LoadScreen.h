// Developed by Malcaraz

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "MVVM_LoadScreen.generated.h"
class UMVVM_LoadSlot;
/**
 * 
 */
UCLASS()
class AURA_API UMVVM_LoadScreen : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:

	void InitializeLoadSlots();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UMVVM_LoadSlot> LoadSlotViewModelClass;

	UFUNCTION(BlueprintPure)
	UMVVM_LoadSlot* LoadSlotViewModelByIndex(int32 Index) const;
private:
	UPROPERTY()
	TMap<int32, UMVVM_LoadSlot*> LoadSlots;

	TObjectPtr<UMVVM_LoadSlot> LoadSlot_0;
	TObjectPtr<UMVVM_LoadSlot> LoadSlot_1;
	TObjectPtr<UMVVM_LoadSlot> LoadSlot_2;

};
