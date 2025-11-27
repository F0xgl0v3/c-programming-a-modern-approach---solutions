#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

// the Q&A section at the end of this chapter shows how the strcmp fucniton might be written using array subscripting. Modify the fucniton to use pointer arithmetic instead.

int custcmp( const char *s1, const char *s2 ) {

	while( *s1 == *s2 ) {
		if( *s1 == '\0' )
			return 0;
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

int main( void ) {

	char *s1 = "test";
	char *s2 = "test";

	printf( "%d\n", custcmp( s1, s2 ) );

	return 0;
}
