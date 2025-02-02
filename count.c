#include<stdio.h>
int countDigits(int num)
{
   static int count=0;
    if (num>0)
    {
        
     count ++;
     countDigits(num/10);

    }
    else{
    return count;
}
}
int main ()
{
        int number;
        int count;
        printf("enter the number of terms");
        scanf("%d",&number);
        count=countDigits(number);
        printf("total number of nigits :%d\n",count);
        return 0;


}