#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// Simplify Programming Project 2(b) by taking advantage of the fact that an array name can be used as a pointer.

int main( void ) {
	char msg[100];
	char rev[100];
	char temp;
	char *p = &msg[0];
	char *q = &rev[0];

	printf( "Enter a message: " );
	while ( (temp = getchar()) != '\n' )
		*p++ = temp;
	*p = '\0';
	while ( p > &msg[0] ) 
		*q++ = *--p;
	*q = '\0';

	printf( "Message: \t%s\nReverse: \t%s\n", msg, rev );
	if( strcmp( msg, rev ) == 0 ) printf( "Palindrome\n" );	
	else printf( "Not a Palindrome\n" );

	return 0;
}
