
#include<stdio.h>
#include<stdlib.h>
void issorted(int arr[],int n)
{
    for(int i=1;i<n;i++){
    
    if(arr[i-1]>arr[i]){
        printf("array is not sorted");
        break;
    }
    if (i==n-1)
    {
        printf("array is sorted");

    }
}
}
int main(){
int arr[] = {2,6,7,89};
int n = sizeof(arr)/sizeof((arr[0]));
issorted(arr,n);
return 0;
}