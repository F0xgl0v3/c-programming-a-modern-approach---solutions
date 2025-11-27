#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

// Use the techniques of Section 13.6 to condense the count_spaces funciton of Section 13.4 In particular, replace the for statemnt by a while loop.

int custcounts( const char s[] ) {

	int count = 0;
	while( *s ) {
		if( *s == ' ' ) count++;
		s++;
	}

	/*
	int count = 0, i;

	for( i = 0; s[i] != '\0'; i++ ) {
		if( s[i] == ' ' ) {
			count ++;
		}
	}
	*/
	return count;
}

int main( int argc, char *argv[] ) {

	printf( "%d\n", custcounts( argv[1] ) );

	return 0;
}
