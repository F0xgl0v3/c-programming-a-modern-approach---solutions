#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

// The following fucntion supposedly creates an identical copy of a string. What's wrong with the fucntion?

char *duplicate( const char *p ) {
	// char *q;
	// char q[50];
	char *q = malloc( sizeof( char ) * 50 );
	
	strcpy( q, p );
	// return q;
	// return &q[0];
	return q;
}
// my inital thought would be, that we run into problems bcs we dont initialize q, lets see if this holds true.
// it seems like we are getting into troulbe here because if we try to return &q[0] we try to return a local variable.
// using malloc would work, but I blelive that this is not allowed so far, bcs the book didn't mention it so we gonna have to find a way to make this work without using malloc.
// there are multiple ways we could achieve our goal, passing a second pointer, making q global, using malloc, i will check what the offical solutions acutally wants us to do here.
// well the books just saies that this is a future topic, this is kind of odd to me because we already got all the tools we need to make it work even without malloc. But hey, maybe we should keep it like this? 

int main( void ) {

	char *p = "my test string\n";
	char *q = duplicate( p );
	printf( "%s%s", p, q );

	free( q );
	return 0;
}

