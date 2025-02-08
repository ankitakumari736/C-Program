#include<stdio.h>
int main()
{
    int n,n1;
    printf("enter two number ");
    scanf("%d %d",&n,&n1);
    int c=n^n1;
    int count=0;
    while(c>0)
    {
        c=c &(c-1);
        count++;
    }
   printf("count %d\n",count);
   return 0;
}