#include<stdio.h>
int countbit(int n)
{
    int count=0;
    while(n>0)
{
    n=n&(n-1);
    count=count + 1;

}
return count;

}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",countbit(n));
    return 0;
}