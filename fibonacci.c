#include<stdio.h>
int fibo(int n){
    int f=0;
    int s=1;
    int nextterm=0;
    int i;
    printf("%d\n",f);
     printf("%d\n",s);
    for(i=1;i<n-2;i++)
    {
        nextterm= f+s;
        f=s;
        s=nextterm;
        printf("%d\n",nextterm);
    }

}
int main()
{
     int n,a;
    printf("enter the number of terms");
    scanf("%d",&n);
     a=fibo(n);
    return 0;
}
