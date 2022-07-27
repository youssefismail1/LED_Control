
# include "MACROS.h"
# include "STD_TYPES.h"
# include "GPIO_Interface.h"
void GPIO_SetPinDirection(u8 PortNUM,u8 PinNUM,u8 Direction)
{
	switch(PortNUM)
	{
		case GPIO_PortA:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOA_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOA_DIR,PinNUM);
		}
	
		case GPIO_PortB:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOB_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOB_DIR,PinNUM);
		}
	
		case GPIO_PortC:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOC_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOC_DIR,PinNUM);
		}
	
		case GPIO_PortD:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOD_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOD_DIR,PinNUM);
		}
	
		case GPIO_PortE:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOE_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOE_DIR,PinNUM);
		}
	
		case GPIO_PortF:
		if(Direction==STD_HIGH)
		{
			Set_Bit(GPIOF_DIR,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOF_DIR,PinNUM);
		}
	}

}
void GPIO_SetPinValue(u8 PortNUM, u8 PinNUM, u8 PinValue)
{
	switch(PortNMU)
	{
		case GPIO_PortA:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOA_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOA_DATA,PinNUM)
		}
		case GPIO_PortB:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOB_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOB_DATA,PinNUM)
		}
		case GPIO_PortC:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOC_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOC_DATA,PinNUM)
		}
		case GPIO_PortD:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOD_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOD_DATA,PinNUM)
		}
		case GPIO_PortE:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOE_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOE_DATA,PinNUM)
		}
		case GPIO_PortF:
		if(PinValue==STD_HIGH)
		{
			Set_Bit(GPIOF_DATA,PinNUM);
		}
		else
		{
			Clear_Bit(GPIOF_DATA,PinNUM)
		}
	}
}
void GPIO_SetPinDigEnable(u8 PortNUM, u8 PinNUM, u8 DigEnable)
{
	switch(PortNUM)
	{
		case GPIO_PortA:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOA_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOA_DEN,PinNUM);
		}
		case GPIO_PortB:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOB_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOB_DEN,PinNUM);
		}
		case GPIO_PortC:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOC_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOC_DEN,PinNUM);
		}
		case GPIO_PortD:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOD_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOD_DEN,PinNUM);
		}
		case GPIO_PortE:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOE_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOE_DEN,PinNUM);
		}
		case GPIO_PortF:
		if (DigEnable==STD_HIGH)
		{
			Set_Bit(GPIOF_DEN,PinNUM);
		}
		else	
		{	
			Clear_Bit(GPIOF_DEN,PinNUM);
		}
	}
}	
