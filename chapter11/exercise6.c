#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void find_two_largest( int a[], int n, int *largest, int *second_largest );

int main( void ) {

	int largest, second_largest, n;
	
	printf( "enter array length: " );
	scanf( " %d", &n );

	unsigned int a[n];

	for ( int i = 0; i < n; i++ ) {
		int fd = open( "/dev/urandom", O_RDONLY );
		read( fd, &a[i], sizeof( unsigned int ) );	
		a[i] %= 100;
	}

	for ( int i = 0; i < n; i++ ) {
		printf( "%d ", a[i] );
	}

	find_two_largest( a, n, &largest, &second_largest );
	printf( "\nthe largest element is: %d\nthe second largest element is: %d\n", largest, second_largest );

	return 0;	

}

void find_two_largest( int a[], int n, int *largest, int *second_largest ) {

	*largest = *second_largest = a[0];

	for ( int i = 0; i < n; i++ ) {		
		if ( a[i] > *largest ) {
			*second_largest = *largest;
			*largest = a[i];
		}
		else if ( a[i] > *second_largest ) *second_largest = a[i];
	}

	return;

}
