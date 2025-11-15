#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Rewrite the following function to use pointer arithmetic instead of array subscripting. ( In other words, eliminate the variables i nd j and all uses of the [] operator. ) Use a single loop instead of nested loops. 

#define LEN 10

int sum_two_dimensional_array_og( const int a[][LEN], int n ) {
	int i, j, sum = 0;

	for ( i = 0; i < n; i++ )
		for ( j = 0; j < LEN; j++ )
			sum += a[i][j];

	return sum;
}

int sum_two_dimensional_array( const int *a, int n ) {
	int sum = 0;
	const int *end = a+(n*LEN-1);

	while( a < end ) 
		sum += *a++;

	return sum;
}

int main( void ) {
	int n = 1;
	unsigned int temp;
	int a[n][LEN];
	int sum;
	int fd = open( "/dev/urandom", O_RDONLY );

	for( int *p = &a[0][0]; p < &a[n-1][LEN-1]; p++ ) {
		read( fd, &temp, sizeof(unsigned int) );
		*p = temp % 10;
	}

	for( int *p = &a[0][0]; p < &a[n-1][LEN-1]; p++ ) printf( "%d ", *p );
	printf( "\n" );

	sum = sum_two_dimensional_array( &a[0][0], n );

	printf( "Sum: %d\n", sum );

	return 0;
}
