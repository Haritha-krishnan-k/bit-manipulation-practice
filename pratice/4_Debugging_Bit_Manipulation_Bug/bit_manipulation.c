#include <stdio.h>

int clear_least_significant_bit(unsigned int pin)
{
  int clearbit = pin & ~1;
  return clearbit;
}
int clear_rightmost_bit(unsigned int n)
{
  int clearbit = n & (n-1);
  return clearbit;
}
int main()
{
    unsigned int n = 3;
    printf("the data before clearing the least significant bit :0x%x\n",n);
    int least_bit = clear_least_significant_bit(n);
    int rightmost_bit =clear_rightmost_bit(n);
    printf("the data after clearing least significant bit : 0x%x\n",least_bit);
    printf("the data after clearing rightmost set bit : 0x%x\n",rightmost_bit);
}
