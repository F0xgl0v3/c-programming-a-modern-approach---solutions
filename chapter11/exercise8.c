#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int *find_largest( int a[], int n );

int main( void ) {

	int n;
	printf( "enter array length: " );
	scanf( " %d", &n );
	int fd = open( "/dev/urandom", O_RDONLY );
	int a[n];

	for ( int i = 0; i < n; i++ ) {
		read( fd, &a[i], sizeof( int ) );
		a[i] %= 100;
	}

	int *p = find_largest( a, n );
	for ( int i = 0; i < n; i++ ) {
		printf( "%d ", a[i] );
	}

	printf( "\nThe largest element is: %d\n", *p );

	return 0;
}

int *find_largest( int a[], int n ) {

	// this gives me a segfault.
	// int *p;
	// *p = a[0];
	int *p = &a[0];

	for( int i = 0; i < n; i++ ) {
		if ( a[i] > *p ) p = &a[i];
	}

	return p;
}
