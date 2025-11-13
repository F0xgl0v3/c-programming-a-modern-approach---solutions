#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define N 10

int main( void ) {

	int a[N], *p;
	char decider;
	int fd;

	fd = open( "/dev/urandom", O_RDONLY );

cake:
	printf( "go with randoms? [y/n]: " );
	decider = getchar();
	while ( getchar() != '\n' );
	switch ( decider ) {
		case 'y': case 'Y':
			// go with randoms between (-100) - (100)
			printf( "Generated array: " );
			for ( p = a; p < a + N; p++ ) {
				read( fd, p, sizeof *p  );
				*p %= 100;
				printf( "%d ", *p );
			}
			printf( "\n" );
			break;
		case 'n': case 'N':	
			printf( "Enter %d numbers: ", N );
			for ( p = &a; p < a + N; p++ ) scanf( "%d", p );
			break;
		default: 
			goto cake;
	}

	printf( "Inreverse order:" );	
	for( p = a + N - 1; p >= a; p-- ) printf( " %d", *p );
	printf( "\n" );

	return 0;
}
