// Developed by Malcaraz


#include "UI/WidgetController/OverlayWidgetController.h"

#include "AbilitySystem/AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealtChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealtChanged.Broadcast(AuraAttributeSet->GetMaxHealth());

	// AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAttributeSet->GetHealthAttribute()).AddUObject(this, );
}
