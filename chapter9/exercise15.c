#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

double median( double x, double y, double z );

int main ( void ) {
	int fd = open( "/dev/urandom", O_RDONLY );
	int b;
	double *a = malloc( sizeof (double) * 3 );
	for ( int i = 0; i < 3; i++ ) {
		read( fd, &b, sizeof b );
		a[i] = (b%10);	
	}
	printf( "array: %.3lf %.3lf %.3lf\n", a[0], a[1], a[2] );
	printf( "median: %.3lf\n", median( a[0], a[1], a[2] ) );
	return 0;
}

// the function the book gave me 
double median_alpha( double x, double y, double z ) {
	if ( x <= y ) 
		if ( y <= z ) return y;
		else if ( x <= z ) return z; 
		else return x;
	if ( x <= y ) return y;
	if ( x <= z ) return z;
	return z;
}

double median( double x, double y, double z ) {
	return ( x >= y ? /* x > y */ ( ( z >= x) ? x : /* x is high */ ( ( z >= y ) ? z : y ) ) : /* y > x */ ( ( z >= y ) ?  y : /* y is high */( ( z >= x ) ? z : x ) ) );
}
