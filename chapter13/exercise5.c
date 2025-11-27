#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

void capitalize( char *s ) {
	while( *s++ )
		if( isalpha( *s ) ) 
			*s = toupper( *s );
	return;
}

int main( void ) {
	char s[] = " this is my Test 234 string. \n"; 	// interesting, i started with char *s = " this is my Test 234 string. \n"; and this didnt work, appearantly bcs if we go char *s = "whatever"; it creates a read only 
							// section in the memory. this caused my programm to crash because of a sigsegv that was caused by the capitalize function trying to write into this read only segment.

	capitalize( s );
	printf( s );

	return 0;
}
