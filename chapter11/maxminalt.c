#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int *num; 

void min_max( int *min, int *max ) {

	*min = num[0];
	*max = num[0];
	
	for ( int i = 0; i < 10; i++ ) {
		if ( num[i] > *max ) *max = num[i];
		if ( num[i] < *min ) *min = num[i];
	}

	return;

}	

void printarr( void ) {
	for( int i = 0; i < 10; i++ ) {
		printf( "%d ", num[i] );
	}
	printf( "\n" );
	return;
}

int main( void ) {

	int min, max;
	int fd;
	fd = open( "/dev/urandom", O_RDONLY );
	char decider;
	num = malloc( sizeof(int) * 10 );

cookie:
	printf( "Go with random numbers? [y/n]: " );
	decider = getchar();
	while( getchar() != '\n' );
	switch( decider ) {	
		case 'n':
			printf( "Enter 10 numbers: " ); 
			for( int i = 0; i < 10; i++ ) {
		 	       scanf( " %d ", &num[i] );
			}
			break;
		case 'y':
			printf( "Generating 10 random numbers\n" );
			for( int i = 0; i < 10; i++ ) {
				read( fd, &num[i], sizeof( int ) );
				num[i] %= 100;
			}
			printarr();
			break;
		default:
			goto cookie;
			break;

	}

	min_max( &min, &max );

	printf( "Largest: %d\n", max );
	printf( "Smallest: %d\n", min );

	close( fd );
	free( num );

	return 0;

}
