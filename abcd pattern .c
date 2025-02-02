
#include <stdio.h>
int main()
{
    int n;
    printf("enter number for n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = i; j <= n; j++)
        {
            printf("%c", ch);
            ch++;
        }
        for (int j = 2; j < i * 2 - 1; j++)
        {
            printf(" ");
        }
        for (int j = n + 1 - i; j > 0; j--)
        {
            ch--;
            if (i == 1 && j == n + 1 - 1)
            {
                ch--;
                printf("%c", ch);
                j--;
            }
            else
            {
                printf("%c", ch);
            }
        }
        printf("\n");
    }return 0;
}
