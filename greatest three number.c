#include<stdio.h>
int main()
{
    int a,b,c;
    printf("three number are=");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c) ?printf("a is greatest"):printf("c is gratest"): (b>c)?printf("b is greatest"):printf("c isgreatest");
}