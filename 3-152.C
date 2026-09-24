#include<stdio.h>
#include<conio.h>

void main()
{
	  int roll,s1,s2,s3,s4,s5,total;
	  float per;
	  clrscr();
	  printf("\n enter your roll number :");
	  scanf("%d",&roll);

	  printf("\n enter your five subject mark");
	  scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

	  total=s1+s2+s3+s4+s5;
	  per = total /5;

	  printf("\n total of five subject mark is : %d ",total);
	  printf("\n your per is : %f",per);

	  if(s1 >=35 && s2 >=35 && s3 >=35 && s4 >=35 && s5 >=35)
	  {
		printf("\ result  : pass ");
	  }
	  else
	  {
		printf("\ result  : fail ");
	  }
	  if(per >=70 && per<=100)
	  {
		printf("\n  distrinction :");
	  }
	  else if(per >=60)
	  {
		printf("\n first class :");
	  }
	  else if(per >=50)
	  {
		printf("\n second class :");
	  }
	  else if(per >=35)
	  {
		printf("\n pass class :");
	  }
	  else
	  {
		printf("\n ****** :");
	  }


	  getch();
}

