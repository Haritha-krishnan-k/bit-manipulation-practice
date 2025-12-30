# include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter a number");
    scanf("%d",&n);
    n = n&(~n+1);
   while (n > 1)
    {
        n >>= 1;
        printf("enter n value %d",n);
        count++;
    }
    printf("position where the righmost set bit is - %d",count);
}