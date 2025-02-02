
#include<stdio.h>

int main()
{
    int i ,j ,n;
    printf("enter the number of terms");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
     for (j=n-i;j>=1;j--)
     {
        printf(" ");
    
    }
    for(j=2*i-1;j>=n;j--){
     if (j==n||j==2*i-1||i==1)
     {
    
        
        printf("*");
     }
        else
        {
            printf(" ");
        }
    }

             printf("\n");
}

for ( i = 0; i < n; i++)
{
    printf("*");
}

             return 0;
     
}
