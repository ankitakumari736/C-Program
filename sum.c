#include<stdio.h>
int main()
{
    int sum=0,n,i=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}