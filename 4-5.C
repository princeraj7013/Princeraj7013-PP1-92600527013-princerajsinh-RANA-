#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	for (i = 200; i >= 180; i-=1)
	{
	    printf(" %d", i);
	}

	getch();
}