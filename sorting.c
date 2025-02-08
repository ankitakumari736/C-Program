#include<stdio.h>
int main()
{
int n,i;
printf("number of element");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int low=0;
int mid=0;
int high=n-1;
while (mid<=high)
{
    if(arr[mid]==0)
    {
        int t=arr[mid];
        arr[mid]=arr[low];
        arr[low]=t;
        low++;
        mid++;
    }
    else if(arr[mid]==1)
    {
            mid++;
    }
    else
    {
        int t=arr[high];
        arr[high]=arr[mid];
        arr[mid]=t;
        high--;
    }
}
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}