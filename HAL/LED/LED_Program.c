#include "MACROS.h"
#include "LED_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Interface.h"
#include "STD_TYPES.h"
void Set_LED(void)
{
	GPIO_SetPinValue(GPIO_PortF,1,1);
}

void Clear_LED(void)
{
	GPIO_SetPinValue(GPIO_PortF,1,0);
}