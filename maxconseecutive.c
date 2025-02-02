#include<stdio.h>
int max (int ,int);
int max_consecutive(int arr[],int n)
{
    int res=0;
    int i,curr=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
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
 int result;
   
    int arr[] = {0,1,1,1,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    result=max_consecutive(arr,n);
    printf(" the consecutive max of the given array is %d",result);

}