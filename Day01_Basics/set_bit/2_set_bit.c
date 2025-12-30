# include<stdio.h>
int setbit(int n , int k)
{
    int value;
    return value = n | (1<<k);
}
int main()
{
    int n,k;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter a bit to set");
    scanf("%d",&k);
    int newvalue = setbit(n,k);
    printf("the %d bit is set and the new value is %d\n",k ,newvalue);

}