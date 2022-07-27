#include <TM4C123GH6PM.h>
#include"STD_TYPES.h"
#include"SYSCTRL_Interface.h"
#include"GPIO_Interface.h"
#include"GPIO_Private.h"
#include"Interrupt_Interface.h"
#include"MACROS.h"
#include"NVIC_Interface.h"
#include"LED_Interface.h"
#include"Timer_Interface.h"
#include "Timer_Private.h"
# define SYSTEM_CLOCK_FREQUENCY  16000000

#define DELAY_DEBOUNCE					SYSTEM_CLOCK_FREQUENCY/1000
void Delay(u32 counter);
u8 ON_Ticks=2,OFF_Ticks=8;

int main (void)
{
	 
	/* enable GPIOF and GPTM0 Clocks */
	Enable_GPIOClock(GPIO_PortF);
	Enable_TimerClock(Timer0);
	/*Edge Sensititve */
	Level_EdgeSenstive(GPIO_PortF, 0, 0);
	
	/*Trigger is controlled by GPIO_IEV*/
	BothEdges(GPIO_PortF, 0, 0);

	/* Falling Edge */
	Level_EdgeOperation(GPIO_PortF, 0, 0);
	
	/*Clear Flag */
	Set_Bit(GPIOF_ICR,0);
	
	/* Enable Interrupt */
	ExternalInterruptEnable(GPIO_PortF, 0);

	/* Enable NVIC */
	NVIC_vidSetPriority(30, 3);
	NVIC_SetInterrupt(30);
  /* unlock GPIOCR */
	GPIOF_LOCK=0x4C4F434B;    
	/* enable GPIOPUR */
	GPIOF_CR|=0x01;
	/* enable pull up resistor at SW1 and SW2 */
	GPIOF_PUR|=0x11;
	/* led1 output, SW1 and SW2 are Input */
	GPIO_SetPinDirection(GPIO_PortF,1,1);
	GPIO_SetPinDirection(GPIO_PortF,0,0);
	GPIO_SetPinDirection(GPIO_PortF,4,0);
	
	/* led1, SW1 and SW2 are digital pins */
	GPIO_SetPinDigEnable(GPIO_PortF,1,1);
	GPIO_SetPinDigEnable(GPIO_PortF,0,1);
	GPIO_SetPinDigEnable(GPIO_PortF,4,1);
	
	Timer0_PerodicMode();
  while(1)
	{
		// do nothing
		
	}
  
		
	
	
	
	
	
}
void Delay(u32 counter)
{
	u32 i = 0;
	for(i = 0; i<counter; i++);	
}
void TIMER0A_Handler(void)
{
	Set_LED();
	Timer1_OneShotMode(ON_Ticks*10);
	Clear_LED();
	Timer1_OneShotMode(OFF_Ticks*10);
	Set_Bit(GPTM0_ICR,0);
}
void GPIOF_Handler (void)
{
	u8 flag=0;
	ON_Ticks=0;
	OFF_Ticks=0;
	while(flag==0)
		{
		if((GPIOF_DATA & 0x01)==0)
		{
		  Delay(DELAY_DEBOUNCE);
		  if((GPIOF_DATA &0x01)==0)
		   {
		    ON_Ticks++;
		    if((GPIOF_DATA & 0x10)==0)
			  { 
					Delay(DELAY_DEBOUNCE);
				  if((GPIOF_DATA & 0x10)==0)
				  {
						flag=1;
				  }
		    }
			}
		}
	  }
		flag=0;
		while(flag==0)
		{
		if((GPIOF_DATA & 0x01)==0)
		{
		  Delay(DELAY_DEBOUNCE);
		  if((GPIOF_DATA & 0x01)==0)
		   {
		    OFF_Ticks++;
		    if((GPIOF_DATA & 0x10)==0)
			  { 
					Delay(DELAY_DEBOUNCE);
				  if((GPIOF_DATA & 0x10)==0)
				  {
						flag=1;
				  }
		    }
			}
		}
	  }
	  Set_Bit(GPIOF_ICR,0);
	  
}	
