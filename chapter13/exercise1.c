#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The following function calls supposedly write a single new-line character, nut some are incorrect. Identify which calls don't work and explain why.

int main( void ) {

	printf( "%c", '\n' );
	printf( "%c", "\n" );
	// printf( "%s", '\n' );
	printf( "%s", "\n" );
	// printf( '\n' );
	printf( "\n" );
	putchar( '\n' );
	// putchar( "\n" );
	// puts( '\n' );
	puts( "\n" );
	puts( "" );

	return 0;
}
