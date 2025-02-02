#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the angle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    printf(" it is a triangle");
    else 
    printf("it is not a triagle");
    return 0;

}