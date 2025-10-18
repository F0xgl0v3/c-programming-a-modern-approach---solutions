#include <stdio.h>

double average ( double a, double b ); 		/* declaration */
// double average ( double, double ); 		// this would behave the same as the line above, we may omit parameter names when declaring a function, but it is advised against. 

int main ( void ) {

	double x, y, z;

	printf( "Enter three numbers: " );
	scanf ( "%lf%lf%lf", &x, &y, &z );
	printf( "Average of %g and %g: %g\n", x, y, average( x, y );
	printf( "Average of %g and %g: %g\n", y, z, average( y, z );
	printf( "Average of %g and %g: %g\n", x, z, average( x, z );
		
	return 0;

}

double average ( double a, double b ) {		/* definition */
	return ( a + b / 2 );
}	
