#include<stdio.h>
void rearrange(int n, int arr[])
{
    
    int pos=0,neg=1,i,res[n];
    
    
    for(i=0;i<=n;i++)
    {
        if(arr[i]<0)
        {
             res[pos]=arr[i];
             pos=pos+2;        }
        else 
        {
             res[neg]=arr[i];
             neg=neg+2;
        }

    }
   /* for(i=0,j=0,k=0;i<=n;i++)
    {
        if(i%2==0)
        {
             arr[i]=a1[j];
             j++;
        }
        else 
        {
             arr[i]=a2[k];
             k++;
        }

    }*/
    for(i=0;i<n;i++)
    {
        printf("\n%d",res[i]);
    }
    
}
int main()
{
    int n;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("enter the array");

    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rearrange(n,arr);
    
}