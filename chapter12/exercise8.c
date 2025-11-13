#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Rewrite the following funciton to use pointer arithmetic instead of array subscripting. ( In other words,eliminate the variable i and all uses of the [] operator. ) Make as few changes as possible.

void store_zeros( int a[], int n ) {
	int i;

	for (i = 0; i < n; i++ )
		a[i] = 0;
	return;
}

void store( int a[], int n ) {
	int *p = &a[0];

	for ( p; p < &a[n]; p++ ) *p = 0;

	return;
}

int main( void ) {

	int n = 5;
	int a[n], *i;

	store( a, n );

	for( i = &a[0]; i < &a[n]; i++ ) printf( "%d ", *i );
	printf( "\n" );

	return 0;

}
