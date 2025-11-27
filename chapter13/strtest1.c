#include <stdio.h>
#include <stdlib.h>

int main( void ) {

	char *s = "Hello World";
 	do putchar( *s );
	while( *s++ );
	printf( "\n" );
	return 0;
}
