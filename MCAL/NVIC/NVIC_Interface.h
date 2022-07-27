
#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_
#include"STD_TYPES.h"

void NVIC_SetInterrupt(u8 InterruptNum);
void NVIC_ClearInterrupt(u8 InterruptNum);
void NVIC_vidSetPriority(u8 InterruptNum, u8 InterruptPriority);

#endif