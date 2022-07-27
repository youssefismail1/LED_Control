#ifndef INTERFACE_H_
#define INTERFACE_H_

void GPIO_SetPinDirection(u8 PortNUM,u8 PinNUM,u8 Direction);
void GPIO_SetPinValue(u8 PortNUM, u8 PinNUM, u8 PinValue);
void GPIO_SetPinDigEnable(u8 PortNUM, u8 PinNUM, u8 DigEnable);

# define GPIO_PortA   0
# define GPIO_PortB   1
# define GPIO_PortC   2
# define GPIO_PortD   3
# define GPIO_PortE   4
# define GPIO_PortF   5

#endif