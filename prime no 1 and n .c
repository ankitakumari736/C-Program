
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
