#include<stdio.h>
int calculateFactorial(int n)
{
   if(n==0 || n==1){
    return 1;
   }
   
   else {
    return (n* calculateFactorial(n-1));
   }
   
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