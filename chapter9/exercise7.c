#include <stdio.h>
#include <stdlib.h>

int f ( int a, int b );

int main ( void ) {
	double a, b, x;
	int i;
	printf( "enter 2 numbers: " );
	scanf( "%lf %lf", &a, &b );
	x = f( a, b );
	i = f( a, b );
	printf( "a+b=%lf\n", x );
	printf( "a+b=%d\n", i );
	return 0;
}

int f ( int a, int b ) {
	return a + b;
}


// conclusion drawn from the tests: every single statement is leagal, since promotions are performed.
