#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("\n Sunday");
	}
	else if(num==1)
	{
		printf("\n Monday");
	}
	else if(num==1)
	{
		printf("\n Monday");
	}
	else if(num==2)
	{
		printf("\n Tuesday");
	}
	else if(num==3)
	{
		printf("\n Wednesday");
	}
	else if(num==4)
	{
		printf("\n Thursday");
	}
	else if(num==5)
	{
		printf("\n Friday");
	}
	else if(num==6)
	{
		printf("\n Saturday");
	}
	else
	{
		printf("\n Invalid number");
	}
	getch();
}
