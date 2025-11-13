#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Modify the find_middle function of Section 11.5 so that it uses pointer arithmetic to calculate the return value.

int *find_middle( int *a, int n ) {

	return (a+(n/2));
}

int main( void ) {

	int fd = open( "/dev/urandom", O_RDONLY );
	int *a = malloc( sizeof(int) * 10 );
	int n = 10;

	for( int i = 0; i < n; i++ ) {
		read( fd, (a+i), sizeof a[0] );
		*(a+i) = *(a+i)%100 + 1;
		printf( "%d ", *(a+i) );
	}
	printf( "\n" );
	printf( "%d\n", *find_middle( a, n ) );

	close( fd );
	free( a );
	return 0;
}
