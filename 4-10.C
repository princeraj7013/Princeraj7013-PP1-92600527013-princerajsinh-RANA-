#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,total=0;
	clrscr();
	printf("\n enter 10 number:");

	for (i = 1; i <= 10; i++)
	{
	    printf("\n enter number %d:", i);
	    scanf("%d",&num);
	    total+=num;
	}

	printf("\n total value is :%d",total);

	getch();
}
