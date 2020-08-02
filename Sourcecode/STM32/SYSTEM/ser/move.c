#include "move.h"
#include "stm32f10x.h"

void move_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB,ENABLE);

	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_8|GPIO_Pin_9;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
}


void move_go(void)
{
	motor1_Go
	motor2_Go
	motor3_Go
	motor4_Go
}

void move_back(void)
{
	motor1_Back
	motor2_Back
	motor3_Back
	motor4_Back
}

void move_left(void)
{
	motor1_Go
	motor2_Back
	motor3_Back
	motor4_Go
}

void move_right(void)
{
	motor1_Back
	motor2_Go
	motor3_Go
	motor4_Back
}

void move_spin(void)
{
	motor1_Back
	motor2_Go
	motor3_Back
	motor4_Go
}


