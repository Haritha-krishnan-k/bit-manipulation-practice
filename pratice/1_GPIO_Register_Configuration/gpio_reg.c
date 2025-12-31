#include <stdio.h>

volatile unsigned int GPIO_CTRL_REG = 0x00000012;

void set_pin_as_output(unsigned int pin)
{
    GPIO_CTRL_REG |= (1U<<pin);
}

int main()
{
    printf("Before:0x%x\n",GPIO_CTRL_REG);
    set_pin_as_output(5);
    printf("After:0x%x\n",GPIO_CTRL_REG);
}