#include"STD_TYPES.h"
#include"Timer_Private.h"
#include"Timer_Interface.h"
#include"MACROS.h"
#include"NVIC_Interface.h"

void Timer1_OneShotMode(u8 times)
{
	
	/*disable Timer1A */
	Clear_Bit(GPTM1_CTL,0);
	
	/* 16 bit mode */
	Set_Bit(GPTM1_CFG,2);
	
	/* One_Shot, Count_Down */
	Set_Bit(GPTM1_TAMR,0);
	
	/* Intial Value */
	GPTM1_TAILR=(6400*(times/100))-1; 
	
	/* PreScaler */
	GPTM1_TAPR=250-1;
	
	/* Clear Flag */
	Set_Bit(GPTM1_ICR,0);
	
	
	/* Enable Timer0A */
	Set_Bit(GPTM1_CTL,0);
	
  /* wait flag set */
	while ((GPTM1_RIS & 0x01)==0);
	
	/* Clear Flag */
	Set_Bit(GPTM1_ICR,0);
	
}

void Timer0_PerodicMode(void)
{
	/*disable Timer1A */
	Clear_Bit(GPTM0_CTL,0);
	
	/* 16 bit mode */
	Set_Bit(GPTM0_CFG,2);
	
	/* perodic, Count_Down */
	Set_Bit(GPTM0_TAMR,1);
	
	/* Intial Value */
	GPTM0_TAILR=6400-1;   /* 0.1 sec  */
	
	/* PreScaler */
	GPTM0_TAPR=(250-1);
	
	/* Clear Flag */
	Set_Bit(GPTM0_ICR,0);
	
		/* Enable Interrupt */
	Set_Bit(GPTM0_IMR,0);
	
	/* Enable Timer0A */
	Set_Bit(GPTM0_CTL,0);
	
	NVIC_SetInterrupt(19);
}
