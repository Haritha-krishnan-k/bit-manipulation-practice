# include <stdio.h>

int power_of_two(int value)
{
    if(value<=0)
    {
        return 0;
    }
    return (value&(value-1))==0;
}

int main()
{
 int value = 16;
 if(power_of_two(value))
 {
    printf("it is a valid power-of-two buffer size\n");
 }
 else
 {
    printf("it is an invalid buffer\n");
 }
}