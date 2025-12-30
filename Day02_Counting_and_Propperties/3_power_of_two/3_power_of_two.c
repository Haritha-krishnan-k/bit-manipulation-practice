#include<stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    if(n&(n-1))
    {
        printf("not power of two ");
    }
    else
    {
       printf("power of two");
    }
}