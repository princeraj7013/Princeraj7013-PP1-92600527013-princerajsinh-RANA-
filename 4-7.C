#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,j;
	clrscr();

	printf("\n enter any number:");
	scanf("%d",&num);

	printf("\n multiplication table for %d:",num);

	for(i=1; i<=10; ++i)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	printf("\n for while loop");
	j=1;
	while(j<=10)
	{
		printf("%d*%d=%d\n",num,j,num*j);
		++j;
	}
	getch();
}