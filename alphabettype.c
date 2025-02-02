#include<stdio.h>
int main()
{
    char ch;
    printf(" enter your character");
    scanf("%c",&ch);
    if (ch=='A' || ch=='a' ||ch=='E' || ch=='e'||ch=='I' || ch=='i'||ch=='U' || ch=='u'||ch=='A' || ch=='a'||ch=='O' || ch=='o')
    {
       printf("vowel");
    }
    else{
        printf("consonent");
    }
    
 }