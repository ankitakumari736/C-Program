#include<stdio.h>
int prefix(int *arr,int n,int s,int e){
    int res=1,c=1,temp[n];
    temp[0]=arr[0];
    for(int i=1;i<n;i++)
    temp[i]=temp[i-1]+arr[i];

    res=temp[e];

    if(s!=0)
    res-=arr[s-1];
    return res;
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("i j");
    scanf("%d%d",&i,&j);
    printf("%d",prefix(arr,n,i,j));
}