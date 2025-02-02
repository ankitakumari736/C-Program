#include<stdio.h>
int max (int ,int);
int min(int ,int);
int max_subarray(int arr[],int n,int k)
{
    int res=arr[0];
    int i;

    for (i=0;i<n;i++)
    {
         int curr=0;
        for(int j=i;j<k;j++)
        {
            curr=curr+arr[j];
            res=max(res,curr);

        }
    }return res;
    
}
int min_subarray(int arr[],int n,int k)
{
    int res=arr[0];
    int i;

    for (i=0;i<n;i++)
    {
         int curr=0;
        for(int j=i;j<k;j++)
        {
            curr=curr+arr[j];
            res=min(res,curr);

        }
    }return res;
    
}
int max( int a,int b)
{
    if(a>b){
        return a;
    }
    else 
    {
        return b;
    }
}

int min( int a,int b)
{
    if(a<b){
        return a;
    }
    else 
    {
        return b;
    }
}
int main()
{
 int k,n,i;

   printf("enter the size of array:\n");
   scanf("%d",&n);
  printf("enter the size of array to check :\n");
   scanf("%d",&k);
    
    int arr[n]; 
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int max=max_subarray(arr,n,k);
    int min=min_subarray(arr,n,k);
        
    printf("maximum subray :%d and minimum subray %d\n",max,min);
           
    return 0;
        
    
}