
#include<stdio.h>

int main()
{
    int n;
    printf("\n number: ");
    scanf("%d",&n);
     if((n>0)&&(n&(n-1))==0)
    {
        printf("yes");
    }
    else{
        printf("not");
    }
return 0;
}