#include <stdio.h>

int main ( void ) {

	/* 
	 * ASCII in Octal, characters /b /n /r /t
	 */

	int a,b,c,d;

	a = 010;
        b = 012;
	c = 015;
	d = 011;

	printf(" %c %c %c %c \n", a, b, c, d);

	return 0;
}
