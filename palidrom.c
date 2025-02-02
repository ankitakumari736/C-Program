#include<stdio.h>
int main()
{
    int count=0,n,sum=0,rem,rev=0,t;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        rev=rev*10+rem;
        n=n/10;
        count++;

    }
    printf("digits=%d",count);
    printf("sum=%d",sum);
    printf("reverse=%d",rev);
    if(t==rev)
    {
        printf("%d its a palindrome\n");

    }
    else
    {
        printf("%d its not a palidrome\n");
    }
    return 0;
}