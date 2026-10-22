#include <stdio.h>
#include <conio.h>
void main()
 {
   // long int x;
    int x, rev=0,rem;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &x);

    while (x > 0) {
	rem = x % 10;
	rev = rev * 10 + rem;
	x /= 10;


    }

    printf("rev of digits of %d = %d\n", x, rev);

    getch();
}