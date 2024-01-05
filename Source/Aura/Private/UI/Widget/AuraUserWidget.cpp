// Developed by Malcaraz


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetContrller(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
