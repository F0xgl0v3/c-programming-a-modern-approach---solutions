#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Modify the find_largest function so that it uses pointer arithmetic -not subscripting- to visit array elements.

int *find_largest(int *a, int n);

int main( void ) {
	
	int n = 10;
	int fd = open( "/dev/urandom", O_RDONLY );
	int *a = malloc( sizeof(int) * n ); 
	for( int *i = &a[0]; i < &a[n]; i++ ) {
		read( fd, i, sizeof a[0] );
		*i = (*i)%100 + 1;
	}
	for( int *i = &a[0]; i < &a[n]; i++ ) printf( "%d ", *i );
	printf( "\n" );

	printf( "%d\n", *find_largest( a, n ) );

	return 0;
}

int *find_largest(int *a, int n) {

	int *l = &a[0];
	for( int *i = &a[0]; i < &a[n]; i++ ) if( *i > *l ) l = i;

	return l;
}
