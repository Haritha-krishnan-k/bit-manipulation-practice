# include<stdio.h>
#include <stdbool.h>


bool clearbit(int n , int k)
{
    int value;

    if(n & (1<<k) ==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,k;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a bit to set\n");
    scanf("%d",&k);
    int newvalue = clearbit(n,k);
    printf("the bit in the position %d  of %d number is %d value  ",k , n , newvalue);

}