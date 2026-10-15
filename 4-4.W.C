#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for (i = 100; i >= 90; i-=1)
	{
	    printf(" %d", i);
	}
	 printf("\n");
	 printf("\n for while loop");

	 j=100;

	 while(j>=90)
	 {
	      printf(" %d ",j);
	      j-=1;
	 }


	getch();
}