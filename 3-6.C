

#include<stdio.h>
#include<conio.h>
void main()
{

	  float salary,hra,ta,da,pf,gross;
	  clrscr();
	  printf("\n enter salary:");
	  scanf("%f",&salary);

	  if(salary>=5000)
		   {

		       hra=salary*0.05;
		       ta=salary*0.06;
		       da=salary*0.04;
		       p
		       f=salary*0.05;
		   }

	   else
		   {
		       hra=salary*0.04;
		       ta=salary*0.05;
		       da=salary*0.03;
		       pf=salary*0.04;

		    }
	    gross=salary+hra+ta+da-pf;

	    printf("\n hra: %.2f",hra);
	    printf("\n ta: %.2f",ta);
	    printf("\n da: %.2f ",da);
	    printf("\n pf: %.2f",pf);
	    printf("\n gross: %.2f", gross);

	    getch();
 }