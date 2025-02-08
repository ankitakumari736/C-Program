#include<stdio.h>
int main()
{
    int i,ans=0,n,x=0;
    printf("enter an integer ");
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n-1;i++)
    
    {
       scanf("%d",&a[i]);
       
    }
    for(i=1;i<=n;i++)
    
    {
       x=x^i;
       
    }
for(i=0;i<n-1;i++)
    
    {
       ans=ans^a[i];
       
    }
    
    int p=x^ans;
   printf("missing %d\n",p);
   return 0;
}