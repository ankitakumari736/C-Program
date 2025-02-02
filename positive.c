#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    (a==0)?(printf("number is 0")):(a>0 ? printf("number is positive"):printf("number is negative"));
}