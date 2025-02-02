#include<stdio.h>
int power(int n)
{
    int i,a=1;
    for( i=1;i<=n;i++)
    {
        a=a*2;

    }
    return a;
}
int main()
{
    int n,a;
    printf("enter the power of 2=\n");
    scanf("%d",&n);
    a=power(n);
    printf("%d\n",a);
    return 0;
}