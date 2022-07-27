#ifndef SYSCTRL_H_
#define SYSCTRL_H_

#define RCGCGPIO 	*((volatile u32*) 0x400FE608)
#define RCGCUART 	*((volatile u32*) 0x400FE618)
#define RCGCSSI 	*((volatile u32*) 0x400FE61C)
#define RCGCI2C 	*((volatile u32*) 0x400FE620)
#define GPIOHBCTL	*((volatile u32*) 0x400FE06C)
#define RCGCADC 	*((volatile u32*) 0x400FE638)
#define RCGCTIMER 	*((volatile u32*) 0x400FE604)
#define RCGCPWM 	*((volatile u32*) 0x400FE640)

#endif