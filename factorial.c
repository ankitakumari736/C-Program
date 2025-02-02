#include<stdio.h>
int main()
{
    int n,d,i;
    float fact;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n/10;
        fact=1;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
    
    printf("%f factorial of number \n",fact);
    }
    return 0;
}