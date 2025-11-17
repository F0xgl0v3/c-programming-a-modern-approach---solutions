#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define len 50

// Simplify Protramming Project 1 (b) by raking advantage of the fact that an array name can be aused as a pointer.

int main( void ) {
	char *msg = malloc( sizeof(char) * len );
	int i = 0;

	printf( "Enter a message: " );
	while( ( *msg++ = getchar() ) != '\n' ) 
		i++;
	--msg;

	printf( "Reversal is: " );
	while( i-- > 0  ) 
		putchar(*--msg);
	putchar( '\n' );

	free( msg );
	return 0;
}
