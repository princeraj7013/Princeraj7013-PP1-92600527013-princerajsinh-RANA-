#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N,j;
	clrscr();

	for (i = 1; i <='N'; i+=2)
	{
	    printf("\t %d", i);
	}
	 printf("\n");
	 printf("\n for while loop");

	 j=1;

	 while(j<='N')
	 {
	      printf("\t %d ",j);
	      j+=2;
	 }


	getch();
}