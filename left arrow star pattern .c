 #include<stdio.h>
int main()
{
    int n;
    printf("enter number for n:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <n; j++)
        {
            printf(" ");
        }
        
        for (int j = i; j <=n; j++)
        {
           printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i >0; i--)
    {
        for (int j = i; j <n; j++)
        {
            printf(" ");
        }
        
        for (int j = i; j <=n; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}
