# include<stdio.h>

int main()
{
    int a=5,b=10;
    printf("Before swap\t");
    printf("a=%d and b=%d\n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("After swap\t");
    printf("a=%d and b=%d\n",a,b);
}