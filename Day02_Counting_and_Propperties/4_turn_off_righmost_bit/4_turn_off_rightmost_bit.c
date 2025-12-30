# include <stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    n = n&(n-1);
    printf("number after turning off the righmost set bit is - %d",n);
}