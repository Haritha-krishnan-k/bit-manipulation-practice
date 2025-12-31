# include<stdio.h>

volatile unsigned int ISR = 10110000;

void handle_highest_priority()
{
    unsigned int isolated_bit;

    if(ISR == 0)
    {
        return ;
    }

    isolated_bit = ISR &(~(ISR)+1);
    ISR = ISR & ~isolated_bit ;

}

// int position_of_set_bit(unsigned int n )
// {
//   int pos=0;
//   unsigned int isolated;

//   if(n==0)
//   {
//     return -1;
//   }
//   isolated = n & (~n);
//   while(isolated >1)
//   {
//     isolated >>=1;
//     pos++;
//   }
//   return pos;
// }

int main()
{
    printf("before ISR:0x%x\n",ISR);
//    int pos =  position_of_set_bit(ISR);
    // printf("position:%d\n",pos);
    handle_highest_priority();
    printf("After ISR:0x%x\n",ISR);

}