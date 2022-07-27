
#include "SYSCTRL_Interface.h"
#include "SYSCTRL_Private.h"
#include "GPIO_Interface.h"
#include "MACROS.h"
void Enable_GPIOClock(u8 PortNUM)
{
	switch(PortNUM)
	{
		case GPIO_PortA:
			Set_Bit(RCGCGPIO,0);
			break;
		case GPIO_PortB:
			Set_Bit(RCGCGPIO,1);
			break;
		case GPIO_PortC:
			Set_Bit(RCGCGPIO,2);
			break;
		case GPIO_PortD:
			Set_Bit(RCGCGPIO,3);
			break;
		case GPIO_PortE:
			Set_Bit(RCGCGPIO,4);
			break;
		case GPIO_PortF:
			Set_Bit(RCGCGPIO,5);
			break;
	}	
}

void Enable_TimerClock(u8 TimerNUM)
{
	switch(TimerNUM)
	{
		case Timer0:
		Set_Bit(RCGCTIMER,0);
		break;
		case Timer1:
		Set_Bit(RCGCTIMER,1);
		break;
		case Timer2:
		Set_Bit(RCGCTIMER,2);
		break;
		case Timer3:
		Set_Bit(RCGCTIMER,3);
		break;
		case Timer4:
		Set_Bit(RCGCTIMER,4);
		break;
		case Timer5:
		Set_Bit(RCGCTIMER,5);
		break;
	}
}	
