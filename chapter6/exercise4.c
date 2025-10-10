#include <stdio.h>

int main ( void ) {
	int i = 0;

	for ( i = 0; i < 10; i++ )
	for ( i = 0; i < 10; ++i )
	for ( i = 0; i++ < 10; ){}
	// which loop is not equivalent to the other 2?
	
	printf(" the third loop is not equivalent to the other 2 because, i is incremented BEFORE the LOOPBODY.\n while the other 2 increment it after loopbody execution.\n");

}
