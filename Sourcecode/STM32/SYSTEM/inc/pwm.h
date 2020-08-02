#ifndef __PWM_H
#define __PWM_H
#include "stm32f10x.h"
//void TIM3_PWM_Out(u32 CH1_Duty,u32 CH2_Duty,u32 CH3_Duty,u32 CH4_Duty,u32 Fre1,u32 Fre2,u32 Fre3,u32 Fre4);
void TIM_PWM_Init(u32 arr,u32 CCR1_Val,u32 CCR2_Val,u32 CCR3_Val,u32 CCR4_Val);



#endif
