#include<stdio.h>
int findodd(int n, int arr[])
{
    int i;
     int res =0;
    for(i=0;i<n;i++)
    {
        res=res^ arr[i];
 }
    return res;
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
    int a=findodd(n,arr);
   printf("odd one are %d",a);
   


}
    