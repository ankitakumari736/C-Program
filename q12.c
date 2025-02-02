#include <stdio.h>
int main()
{
    int n;
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
[11:55 pm, 30/1/2025] Arpita Gl A1: 
[11:56 pm, 30/1/2025] Arpita Gl A1: // right arrow star
#include<stdio.h>
int main()
{
    int n;
    printf("enter number for n=");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <i*2; j++)
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
        for (int j = 0; j <i*2; j++)
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
[11:58 pm, 30/1/2025] Arpita Gl A1: #include <stdio.h>
int main()
{
    int n;
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
[12:00 am, 31/1/2025] Arpita Gl A1: #include <stdio.h>
int main()
{
    int n;
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
 #include<stdio.h>
int main()
{
    int n;
    printf("enter number for n=");
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
 #include <stdio.h>
int main()
{
    int n, num=1 ;
    printf("enter the number=");
    scanf("%d", &n);
    while (num <= n)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
            {
              printf("%d is prime\n", num);
            }
        num++;
    }
    return 0;
}