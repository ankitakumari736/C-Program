
#include<stdio.h>
#include<stdlib.h>
int secondLargest(int arr[],int n)
{
    int res=-1,largest=0;

    for(int i=1;i<n;i++){
    
    if(arr[i]>arr[largest]){
        res=largest;
        largest+=i;
    }
    else if (arr[i]!=arr[largest])
    {
        if(res==-1||arr[i]>arr[res])
        res=i;

    }
    else{
        res++;
    }
}
return res;
}
int main(){
    int result;
int arr[] = {8,2,7,9};
int n = sizeof(arr)/sizeof(arr[0]);
 result = secondLargest(arr,n);
printf("second largest element is %d",arr[result]);
return 0;
}