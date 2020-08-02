#include "stm32f10x.h"
#include "pwm.h"
#include "move.h"
#include "sys.h"
#include "usart.h"
#include "spi.h"
extern __IO uint32_t TimeDisplay;
u32 TimingDelay = 0;
/* http://zq281598585.taobao.com/  
启光电子	  ELH    enlighten  sunny
STM32F103RBT6 开发板 库函数部分	  */

//工程模版
void Delay_Ms(u32 nTime);



int main(void)
{
	 u8 i = 0;
	 u8 dataTemp; //??
   SysTick_Config(SystemCoreClock/1000);
	 
	 NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	 move_init();
	 TIM_PWM_Init(7199,6460,6499,6480,6480);
   while(1)
	 {
		 for ( i=0; i < 255; i++ )
		{
			PBout(12)=0;  //PB12
			dataTemp = SPI2_ReadWriteByte(i); 
			printf("%d\r\n",dataTemp);
			//printf("%d\r\n",i);
			PBout(12)=1;  //CS?
			Delay_Ms(100);

			
		}
		dataTemp = SPI2_ReadWriteByte(0xAA);
		printf("%d\r\n",dataTemp);
		Delay_Ms(100);
		 move_left();
   }
}


void Delay_Ms(u32 nTime)
{
	TimingDelay = nTime;
	while(TimingDelay != 0);	
}


void SysTick_Handler(void)
{
	if(TimingDelay)
	TimingDelay--;
}


