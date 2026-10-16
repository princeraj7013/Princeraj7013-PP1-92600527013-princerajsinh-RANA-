#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n sqare is:");
	for (i = 1; i <= 10; i++)
	{
	    printf("\t %d", i*i);
	}
	printf("\n");
	printf("\n cube is:");

	for (i = 1; i <= 10; i++)
	{
	    printf("\t %d ", i*i*i);
	}
	 printf("\n");
	 printf("\n for while loop");
	 printf("\n sqare is:");

	 j=1;

	 while(j<=10)
	 {
	      printf("\t %d ",j*j);
	      j++;
	 }
	 j=1;
	 printf("\n");
	 printf("\n cube is:");

	 while(j<=10)
	 {
	      printf("\t %d ",j*j*j);
	      j++;
	 }



	getch();
}