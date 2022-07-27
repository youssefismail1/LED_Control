#ifndef  MACROS_H_
#define  MACROS_H_

#define Set_Bit(reg,bit)    reg|=(1<<bit)
#define Clear_Bit(reg,bit)  reg&=(~(1<<bit))
#define Get_Bit(reg,bit)    ((reg>>bit)&1)
#define Toggle_Bit(reg,bit)  reg^=(1<<bit)

#endif
