#include<stdio.h>
int main()
{
    int count=0,n,sum=0,rem,t;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
        count++;

    }
    if(sum==t){
        printf("\narmstong");
    }
    else{
        printf("\n not armstrong");
    }
    printf("\ndigits=%d",count);
    printf("\nsum=%d",sum);
    return 0;
}