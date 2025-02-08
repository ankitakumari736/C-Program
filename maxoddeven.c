#include<stdio.h>
int main()
{
    int n,i,max=1,res=1;
    printf("Enter the length of Array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
    printf("Enter the array's %d element:",i);
    scanf("%d",&arr[i]);
    }


    for(i=1;i<n;i++)
    {
        if(arr[i]%2-arr[i+1]%2)
        {
            res++;
        }
        if(max>res)
            max=res;
        else 
            max=1;
    }

    printf("Max odd Even=%d",res);

    return 0;
} 