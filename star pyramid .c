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
   for(j=1;j<i;j++)
    {
        
        printf("* ");
    }

             printf("\n");
}

             return 0;
     
}
