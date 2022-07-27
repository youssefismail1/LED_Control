#include "NVIC_Interface.h"
#include "STD_TYPES.h"
#include "TM4C123.h"
void NVIC_SetInterrupt(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
	NVIC->ISER[0]|=(1<<InterruptNum);
	}
	else if(InterruptNum>=32 && InterruptNum <63)
	{
	NVIC->ISER[1]|=(1<<(InterruptNum-32));
	}
}
void NVIC_ClearInterrupt(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
	NVIC->ICER[0]=(1<<InterruptNum);
	}
	else if(InterruptNum>=32 && InterruptNum <63)
	{
	NVIC->ICER[1]=(1<<(InterruptNum-32));
	}
}

void NVIC_vidSetPriority(u8 InterruptNum, u8 InterruptPriority)
{
	NVIC->IP[InterruptNum] = (InterruptPriority<<5);
}
