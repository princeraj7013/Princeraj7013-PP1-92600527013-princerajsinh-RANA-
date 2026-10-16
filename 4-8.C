#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,s,N;
	clrscr();
	s=n1+n2;

	printf("\n %d enter any number:",N);
	scanf("%d",&N);
	printf("%d%d%d",n1,n2,s);

	while(s<=100)
	{
		n1=n2;
		n2=s;
		s=n1+n2;

		printf("\t %d",s);
	}
	getch();
}