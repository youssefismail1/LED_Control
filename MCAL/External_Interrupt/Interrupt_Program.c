
#include "STD_TYPES.h"
#include "MACROS.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "Interrupt_Interface.h"
void ExternalInterruptEnable(u8 PortNum, u8 PinNum)
{
	switch(PortNum)
	{
		case GPIO_PortA:
		Set_Bit(GPIOA_IM,PinNum);
		break;
		case GPIO_PortB:
		Set_Bit(GPIOB_IM,PinNum);
		break;
		case GPIO_PortC:
		Set_Bit(GPIOC_IM,PinNum);
		break;
		case GPIO_PortD:
		Set_Bit(GPIOD_IM,PinNum);
		break;
		case GPIO_PortE:
		Set_Bit(GPIOE_IM,PinNum);
		break;
		case GPIO_PortF:
		Set_Bit(GPIOF_IM,PinNum);
		break;
	}
}
	
void Level_EdgeSenstive(u8 PortNum, u8 PinNum, u8 senstive)
{
	switch(PortNum)
	{
		case GPIO_PortA:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOA_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOA_IS,PinNum);
		}
		break;
		case GPIO_PortB:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOB_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOB_IS,PinNum);
		}
		break;
		case GPIO_PortC:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOC_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOC_IS,PinNum);
		}
		break;
		case GPIO_PortD:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOD_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOD_IS,PinNum);
		}
		break;
		case GPIO_PortE:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOE_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOE_IS,PinNum);
		}
		break;
		case GPIO_PortF:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOF_IS,PinNum);
		}
		else
		{
			Clear_Bit(GPIOF_IS,PinNum);
		}
		break;
	}

} 

void Level_EdgeOperation(u8 PortNum, u8 PinNum, u8 senstive)
{
	switch(PortNum)
	{
		case GPIO_PortA:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOA_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOA_IEV,PinNum);
		}
		break;
		case GPIO_PortB:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOB_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOB_IEV,PinNum);
		}
		break;
		case GPIO_PortC:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOC_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOC_IEV,PinNum);
		}
		break;
		case GPIO_PortD:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOD_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOD_IEV,PinNum);
		}
		break;
		case GPIO_PortE:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOE_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOE_IEV,PinNum);
		}
		break;
		case GPIO_PortF:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOF_IEV,PinNum);
		}
		else
		{
			Clear_Bit(GPIOF_IEV,PinNum);
		}
		break;
	}

} 	

void BothEdges(u8 PortNum, u8 PinNum, u8 senstive)
{
	switch(PortNum)
	{
		case GPIO_PortA:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOA_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOA_IBE,PinNum);
		}
		break;
		case GPIO_PortB:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOB_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOB_IBE,PinNum);
		}
		break;
		case GPIO_PortC:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOC_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOC_IBE,PinNum);
		}
		break;
		case GPIO_PortD:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOD_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOD_IBE,PinNum);
		}
		break;
		case GPIO_PortE:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOE_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOE_IBE,PinNum);
		}
		break;
		case GPIO_PortF:
		if(senstive==STD_HIGH)
		{
			Set_Bit(GPIOF_IBE,PinNum);
		}
		else
		{
			Clear_Bit(GPIOF_IBE,PinNum);
		}
		break;
	}

} 
