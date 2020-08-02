#ifndef __MOVE_H
#define __MOVE_H
#include "stm32f10x.h"

//#define IN1 A5
//#define IN2 A6
//#define IN3 A7
//#define IN4 A8
//#define IN5 A9
//#define IN6 A
//#define IN7 B8
//#define IN8 B9

#define motor1_Go   {GPIO_ResetBits(GPIOA,GPIO_Pin_5);GPIO_SetBits(GPIOA,GPIO_Pin_6);}
#define motor1_Back {GPIO_ResetBits(GPIOA,GPIO_Pin_6);GPIO_SetBits(GPIOA,GPIO_Pin_5);}

#define motor2_Go   {GPIO_ResetBits(GPIOA,GPIO_Pin_7);GPIO_SetBits(GPIOA,GPIO_Pin_8);}
#define motor2_Back {GPIO_ResetBits(GPIOA,GPIO_Pin_8);GPIO_SetBits(GPIOA,GPIO_Pin_7);}

#define motor3_Go   {GPIO_ResetBits(GPIOA,GPIO_Pin_9);GPIO_SetBits(GPIOA,GPIO_Pin_10);}
#define motor3_Back {GPIO_ResetBits(GPIOA,GPIO_Pin_10);GPIO_SetBits(GPIOA,GPIO_Pin_9);}

#define motor4_Go   {GPIO_ResetBits(GPIOB,GPIO_Pin_8);GPIO_SetBits(GPIOB,GPIO_Pin_9);}
#define motor4_Back {GPIO_ResetBits(GPIOB,GPIO_Pin_9);GPIO_SetBits(GPIOB,GPIO_Pin_8);}

void move_init(void);
void move_go(void);
void move_back(void);
void move_left(void);
void move_right(void);
void move_spin(void);

#endif
