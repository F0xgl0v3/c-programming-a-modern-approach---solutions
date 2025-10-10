#include <stdio.h>

int main ( void ) {
	/* 
	 * ASCII in Octal, characters /b /n /r /t
	 */

	int a,b,c,d;

	a = 0x08;  //010;
        b = 0x0a;  //012;
	c = 0x0f;  //015;
	d = 0x0b;  //011;

	printf(" %c %c %c %c \n", a, b, c, d);

	return 0;
}
