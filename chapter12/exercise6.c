#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Rewrite the following function to use pointer arithmetic instead of array subscripting. ( In other words, eliminate the variable i and all uses of the [] operator. ) Make as few changes as possible.

int sum_array( const int a[], int n ) {

	const int *i; 
	int sum;

	sum = 0;
	for ( i = &a[0]; i < &a[n]; i++ )
		sum += *i;
	return sum;

}

int main( void ) {

	int n = 5;
	int a[n];
	int i;

	for( i = 0; i < n; i++ ) a[i] = i;

	printf( "%d\n", sum_array( a, n ) );
	return 0;

}
