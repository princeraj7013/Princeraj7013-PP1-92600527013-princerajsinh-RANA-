#include<stdio.h>
#include<conio.h>
void main()
{

	  float salary,hra,ta,da,pf,gross;
	  clrscr();
	  printf("\n enter salary:");
	  scanf("%f",&salary);

	  printf("\n enter hra:");
	  scanf("%f",&hra);

	  printf("\n enter ta:");
	  scanf("%f",&ta);

	  printf("\n enter da:");
	  scanf("%f",&da);

	  printf("\n enter pf:");
	  scanf("%f",&pf);

	  printf("\n enter gross:");
	  scanf("%f",&gross);

	  gross=salary+hra+ta+da-pf;

	  printf("\n hra: %.2f",hra);
	  printf("\n ta: %.2f",ta);
	  printf("\n da: %.2f ",da);
	  printf("\n pf: %.2f",pf);
	  printf("\n gross: %.2f", gross);

	    getch();
 }