#include<stdio.h>
int natural(int n)
{
    if(n==0){
        return 0;
    }
    else
    {
        return (n+natural(n-1));
    }
}
int main(){
    int n,a;
    printf("enter the no.");
    scanf("%d",&n);
    a=natural(n);
    printf("sum=%d",a);
}