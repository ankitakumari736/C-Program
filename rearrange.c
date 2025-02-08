#include<stdio.h>
void rearrange(int n, int arr[])
{
    
    int i,j,k=0;
    int a1[n/2],a2[n/2];
    
    for(i=0;i<=n;i++)
    {
        if(arr[i]>0)
        {
             a1[j]=arr[i];
             j++;
        }
        else 
        {
             a2[k]=arr[i];
             k++;
        }

    }
    for(i=0,j=0,k=0;i<=n;i++)
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

    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
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