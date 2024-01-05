// Developed by Malcaraz


#include "UI/WidgetController/OverlayWidgetController.h"

#include "AbilitySystem/AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialVaLues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealtChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealtChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
}
