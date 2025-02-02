
#include<stdio.h>
int majorityElement(int arr[],int n)
{
 
    for (int i=0;i<n;i++)

    { 
        int count =1;
         for(int j=i+1;j<n;j++)
         {
            if (arr[i]==arr[j])
                 {
                     count++;
                 }

         }
        if (count>n/2)
        {
            return arr[i];
        }
    
    }
    return -1;
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
    int result=majorityElement(arr,n);
        if(result==-1)
        {
            printf("this is not a majority element");
        }
        
        else {
                  printf("majority Element :%d \n",result);
            }
    return 0;
        
    
}