#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Assume that the following array contains a week's worth of hourly temperature readings, with each row containing the readings for one day:

int temperatures[7][24];

// write a statement that uses the search funciton (see Exercise 7) to search the entire temperatures array for the value 32.

int main( void ) {

	int fd = open( "/dev/urandom", O_RDONLY );
	unsigned int temp;

	for( int *i = &temperatures[0][0]; i < &temperatures[6][23]; i++ ) {
		read( fd, &temp, sizeof(unsigned int) );
		*i = ( temp % 80 )+1;
	}

	for( int *i = &temperatures[0][0]; i < &temperatures[6][23]; i ) {
		for( int j = 0; j < 4; j++ ) {
			for( int k = 0; k < 5; k++ ) {
				printf( "%2d ", *i++ );
			}
			printf( "\t\t" );
		}
		printf( "\n" );
	}

	for( int *i = &temperatures[0][0]; i <= &temperatures[6][23]; i++ ) 
		if ( *i == 32 ) { 
			printf( "The array contains the value 32.\nAt position: %d\n", ( (int)(i-&temperatures[0][0])+1 ) ); 
			break; 
		}

	return 0;
}
