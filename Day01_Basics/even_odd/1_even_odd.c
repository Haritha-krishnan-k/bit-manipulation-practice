#include<stdio.h>
int iseven(int n)
{
    return !(n&1);
}


int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(iseven(n))
    {
        printf("even");
    }
    else
    {
        printf("odd\n");
    }
}