#include <stdio.h>
#include <conio.h>
void main()
 {
    long int num;
    int digit, sum = 0;
    clrscr();

    printf("Enter an integer: ");
    scanf("%ld", &num);

    while (num > 0) {
	digit = num % 10;
	sum += digit;
	nmu /= 10;
    }

    printf("Sum of digits of %ld = %d\n", num, sum);

    getch();
}