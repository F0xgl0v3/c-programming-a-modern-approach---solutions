#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

// What will be the value of the string str after the following statements have been executed?

int main( void ) {
	char *str = malloc( sizeof( char ) * 50 );

	strcpy( str, "tire-bouchon" );
	strcpy( &str[4], "d-or-wi" );
	strcat( str, "red?" );
	// the string should contain the value "tired-or-wired?"
	printf( "%s\n", str );

	free( str );

	return 0;
}
