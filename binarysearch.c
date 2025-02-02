#include<stdio.h>
int binarySearch(int arr[],int low, int high ,int key)
{
    
    while (low<high)
    {
      int mid=low+(high-low)/2;
       if (arr[mid]==key)
       {
        return mid;
       }
       else if(arr[mid]>key)

       {
         high=mid-1;
       }
       else
       {
        low=mid+1;
       }
       return-1;
       
    }
    
}
int main()
{
  int arr[]={2,4,7,10,23,45,78};
  int n=sizeof(arr)/sizeof (arr[0]);
  int key;
  printf("enter the element to search\n");
  scanf("%d",&key);
  int result= binarySearch(arr,0,n-1,key); 
  printf("Element found at index at %d",result); 
  
  }