#include <stdio.h>
int main()
{
    int n;
    printf("enter number for n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            printf("*");
        }
        for (int j = 1; j < i * 2 - 1; j++)
        {
            printf(" ");
        }
        for (int j = n - i + 1; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        for (int j = n * 2 - i; j > i; j--)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
