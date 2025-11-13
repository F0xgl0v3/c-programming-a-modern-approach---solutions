#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Write the following function: 
void find_two_largest( const int *a, int n, int *largest, int *second_largest );
// a points to an array of length n. The function searches the array for its largest and secondlargest elements, storing them in the variables pointed to by largest and second_largest, respectivly. 
// Use pointer arithmetic -not subscripting- to visit array elements.

int main( void ) {

	int la, sec;
	int len = 10;
	int *a = malloc( sizeof(int) * len );
	int fd = open( "/dev/urandom", O_RDONLY );

	for( int *i = &a[0]; i < &a[len]; i++ ) {
		read( fd, i, sizeof(int) );
		*i = (*i)%100 + 1;
		printf( "%d ", *i );
	}
	printf( "\n" );

	find_two_largest( a, len, &la, &sec );
	printf( "largest: \t\t%d\nsecond largest: \t%d\n", la, sec );
	
	close( fd );
	free( a );
	return 0;
}

// it fails if the first element is the largest, I will have to think of a way to fix this problem.
void find_two_largest( const int *a, int n, int *la, int *sec ) {

	*la = a[0];
	*sec = a[0];

	for( int i = 0; i < n; i++ ) {
		if( *(a+i) > *la ) *la = *(a+i);
		else if( *(a+i) > *sec ) *sec = *(a+i);
	}
	if( *la == *sec && *la == a[0] ) {
		*sec = a[1];	 
		for( int i = 1; i < n; i++ ) {
			if( *(a+i) > *sec ) *sec = *(a+i);
		}
	}

	return;
}
