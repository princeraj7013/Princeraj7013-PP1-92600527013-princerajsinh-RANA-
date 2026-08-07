#include<stdio.h>
#include<conio.h>
void main()
{
	 float num1,num2;
	 clrscr();

	 printf("enter two number");
	 scanf("%f%f",&num1,&num2);

	 if(num1<num2){
	     printf("minimum value is %f\n",num1);
	 }
	 else if(num2<num1){
	     printf("minimum value is %f\n",num2);
	 }
	 getch();

}