#include "main.h"


void GPIO_Config()
{


	RCC->AHB1ENR = 0x00000008;

	GPIOD->MODER = 0x55000000;
	GPIOD->OTYPER = 0x00000000;
	GPIOD->OSPEEDR = 0xFF000000;
	GPIOD->PUPDR = 0x00000000;

}

void delay(uint32_t time)
{
	while(time--);
}

int main(void)
{

	GPIO_Config();
  while(1)
  {
	  GPIOD->ODR = 0x0000F000;
	  delay(100000);
	  GPIOD->ODR = 0x00000000;
	  delay(100000);
  }



}



