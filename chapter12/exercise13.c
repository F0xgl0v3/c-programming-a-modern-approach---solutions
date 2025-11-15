#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Section 8.2 had a program fragment in wich two nested for loops initialized the array ident for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time.
// Hint: Since we won't be using row and col index variables, it won't be easy to tell where to store 1. Instead, we can use the fact that the first element of the array should be 1, the next N elements should be 0,
// the next element should be 1, and so forth. Use a variable to keep track of how many consecutive 0s have been stored; when the count reaches N, it's time to store 1.

#define N 10

double ident[N][N];
int row, col;

/*
for ( row = 0; row < N; row++ )
	for ( col = 0; col < N; col++ ) {
		if ( row == col ) indent[row][col] = 1.0;
		else ident[row][col] = 0.0;
	}
*/

int main( void ) {

	double *p = &ident[0][0];
	for( double *i = p; i < &ident[N][N]; i += 11 ) {
		*i = 1.0;
	}

	for( double* i = p; i < &ident[N-1][N-1]; ) {
		for( int j = 0; j < N; j++ ) {
			printf( "%.2lf ", *i++ );
		}
		printf( "\n" );
	}

	return 0;
}
