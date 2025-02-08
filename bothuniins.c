#include<stdio.h>

void uni(int n,int m,int arr[],int arr2[])
{

    int i=0;
    int j=0;

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
}
void intersection(int m, int n, int arr[], int arr2[])
{
   int i=0;
   int j=0;
while(i<n && j<m)
{

    if(arr[i]<arr2[j])
    {
        i++;
    }
    
    else if(arr[i]>arr2[j])
    {
    
        j++;
    }
    
    else 
    {
        printf("%d",arr[i]);
        i++;
        j++;
    }

}
}
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
printf("union:\n");
uni(n,m,arr,arr2);
printf("\nintersection:\n");
intersection(m,n,arr,arr2);

return 0;
}