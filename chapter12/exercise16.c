#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Write a loop that prints the hightest temperature in the temperatures array ( see Exercise 14 ) for each day of the week. The loop body should call the find_largest function passing it one row ot the array at a time.

int temperatures[7][24];

void find_largest( int *a );

int main( void ) {

	int fd = open( "/dev/urandom", O_RDONLY );
	unsigned int temp;

	for( int *i = &temperatures[0][0]; i <= &temperatures[6][23]; i++ ) {
		read( fd, &temp, sizeof(unsigned int) );
		*i = ( temp % 80 )+1;
	}

	for( int *i = &temperatures[0][0]; i <= &temperatures[6][23]; i ) {
		find_largest( i );
		for( int j = 0; j < 4; j++ ) {
			for( int k = 0; k < 6; k++ ) {
				if ( i-&temperatures[0][0] < 168 ) printf( "%2d ", *i++ );
				else break;
			}
			printf( "\t" );
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

void find_largest( int *a ) {
	
	int *p = a;
	int *end = a+24; // 24 because we use p "<" end and this seems to be more conscistent then "<=" so that is why we do that.
	int high = *a;

	for( p; p < end; p++ ) if( *p > high ) high = *p;

	printf( "hight: %d\t", high );

	return;
}
