#include<stdio.h>
int max (int ,int);
int max_subarray(int arr[],int n)
{
    int res=arr[0];
    int i;
    for (i=0;i<n;i++)
    {
         int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            res=max(res,curr);

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

int main()
{
 int n,i;

   printf("enter the size of array:\n");
   scanf("%d",&n);
    int arr[n]; 
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int result=max_subarray(arr,n);
        
                  printf("subarray maximum :%d \n",result);
           
    return 0;
        
    
}