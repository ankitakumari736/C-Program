#include<stdio.h>
void rev(int arr[],int n)
{
    int low=0,high=n-1;
    while (low<high)
    {
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
    }

}
int main()
{
    int arr[] = {2,6,7,89};
    int i;
    int n = sizeof(arr)/sizeof((arr[0]));
    rev(arr,n);
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}