
#ifndef INTERRUPT_INTERFACE_H_
#define INTERRUPT_INTERFACE_H_

void BothEdges(u8 PortNum, u8 PinNum, u8 senstive);
void Level_EdgeOperation(u8 PortNum, u8 PinNum, u8 senstive);
void Level_EdgeSenstive(u8 PortNum, u8 PinNum, u8 senstive);
void ExternalInterruptEnable(u8 PortNum, u8 PinNum);

#endif