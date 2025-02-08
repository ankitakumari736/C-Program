#include<stdio.h>
int appearodd(int n, int arr[])
{
    int i;
    int x=arr[0];
     int res =0;

    for(i=0;i<n;i++)
    {
        res=res ^ arr[i];
    }
     int k;
    k=(x &(~(x-1)));
     int res1=0,res2=0;
    for(i=0;i<n;i++)
     {
        if( (arr[i]&k)!=0)
        {
             res1=res1 ^arr[i];
        }
    else{
            res2=res2^ arr[i];
        }
   
 }
  printf("%d %d",res1,res2);
}
    

int main()
{
    int n;
    printf("enter the no of element");
    scanf("%d",&n);
    printf("enter the array");

    int i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   appearodd(n,arr);
   
   
return 0;

}
    