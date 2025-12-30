# include <stdio.h>

int setbit(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count ++;
            n = n/2;
        }

    }

    return count;

}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int count = setbit(n);
    printf("%d",count);
}