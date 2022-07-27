#ifndef SYSCTRL_INTERFACE_H_
#define SYSCTRL_INTERFACE_H_
#include "STD_TYPES.h"

void Enable_GPIOClock(u8 PortNUM);
void Enable_TimerClock(u8 TimerNUM);

#define Timer0  0
#define Timer1  1
#define Timer2  2
#define Timer3  3
#define Timer4  4
#define Timer5  5

#endif