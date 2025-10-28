#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long poly( long long x );

int main ( void ) {

	long long x;
	printf( "Enter a number: " );
	scanf( "%lld", &x );
	x = poly( x );
	printf( "%lld\n", x );
	return 0;

}

long long poly( long long x ) {	
	return (long long) 3*pow( x, 5 ) + 2*pow( x, 4 ) - 5*pow( x, 3 ) - pow( x, 2 ) + 7*x - 6;
}
