#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

// What will be the value of the stirng s1 after the following statemnts have been executed?

int main( int argc, char *argv[] ) {
	char *s1 = malloc( sizeof( char ) * 50 );
	char *s2 = malloc( sizeof( char ) * 50 );

	strcpy( s1, "computer" );
	strcpy( s2, "sicence" );
	if( strcmp( s1, s2 ) < 0 )
		strcat( s1, s2 );
	else
		strcat( s2, s1 );
	s1[strlen(s1)-6] = '\0';
	printf( "%s\n", s1 );
	// the value of s1 will be "computers"

	free( s1 );
	free( s2 );

	return 0;
}
