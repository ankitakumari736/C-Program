#include<stdio.h>
int main()
{
 int i,j,n;
    
printf("number of element");
scanf("%d",&n);
int arr[n];
printf("enter first array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int m;
printf("number of element\n");
scanf("%d",&m);
int arr2[m];
printf("enter second array:\n");
for(int j=0;j<m;j++)
{
    scanf("%d",&arr2[j]);
}
printf("union of two row\n ");
i=0;
j=0;

while(i<n && j<m)
{

    if(arr[i]<arr2[j])
    {
        printf("%d",arr[i]);
        i++;
    }
    
    else if(arr[i]>arr2[j])
    {
        printf("%d",arr2[j]);
        j++;
    }
    
    else 
    {
        printf("%d",arr[i]);
        i++;
        j++;
    }

}
while(i<n)
{
    printf("%d",arr[i]);
    i++;
}
while(j<m)
{
    printf("%d",arr2[j]);
    j++;
}

return 0;
}