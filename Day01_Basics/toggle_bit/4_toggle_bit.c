# include<stdio.h>
int clearbit(int n , int k)
{
    int value;
    return value = n ^ (1<<k);
}
int main()
{
    int n,k;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a bit to set\n");
    scanf("%d",&k);
    int newvalue = clearbit(n,k);
    printf("the %d bit is cleared and the new value is %d\n",k ,newvalue);

}