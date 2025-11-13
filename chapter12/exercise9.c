#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Write the following funciton:
double inner_product(const double *a, const double *b, int n );
// a and b both point to arrays of length n. The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic -not subscription- to visit array elements.

int main( void ) {
	
	int n = 10, fd;
 	double *a, *b;
	double c;
	unsigned int temp1, temp2;
	a = malloc( sizeof(double) * n );
	b = malloc( sizeof(double) * n );

	fd = open( "/dev/urandom", O_RDONLY );

	for( int i = 0; i < n; i++ ) {
		read( fd, &temp1, sizeof(unsigned int) );
		read( fd, &temp2, sizeof(unsigned int) );
		*a++ = (double) ( (double)( (temp1%100)+1 ) ) / ( (double) ( (temp2%10)+1 ) );
		read( fd, &temp1, sizeof(unsigned int) );
		read( fd, &temp2, sizeof(unsigned int) );
		*b++ = (double) ( (double)( (temp1%100)+1 ) ) / ( (double) ( (temp2%10)+1 ) );
	}

	for( int i = 1; i <= n; i++ ) {
		printf( "%.2lf ", *(a-i) );
	}
	printf( "\n" );
	for( int i = 1; i <= n; i++ ) {
		printf( "%.2lf ", *(b-i) );
	}
	printf( "\n" );

	c = inner_product( a, b, n );
	printf( "%lf\n", c );

	a -= n;
	b -= n;
	close( fd );
	free( a );
	free( b );
	return 0;
}

double inner_product(const double *a, const double *b, int n ) {

	double prod = 0;
	for( int i = 0; i < n; i++ ) (prod += (*--a) * (*--b));
	return prod;

}
