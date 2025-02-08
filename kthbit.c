#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("length of bit \n");
    scanf("%d",&n);
    printf("enter kth \n");
    scanf("%d",&k);
    int a=(n&(1<<k));
    if(a!=0)
    {
        printf("%d bit is set",k);
    }
    else 
    {
        printf("%d bit is not set",k);;
    }
   return 1;
}
