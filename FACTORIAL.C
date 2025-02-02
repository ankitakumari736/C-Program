#include<stdio.h>
int calculateFactorial(int n)
{
   int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int fact,n;
    printf("enter number of terms");
    scanf("%d",&n);
    int a=calculateFactorial(n);
    printf(" Factorial of the number = %d",a);
    return 0;


}