#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h> 
#include <ctype.h>

void censor( char *s ) {
	do
		if( *s == 'f' || *s == 'o' )
			*s = 'x';
	while( *s++ );
	return;
}

int main( void ) {
	char s[] = "food fool\n";

	censor( s );
	printf( s );

	return 0;
}
