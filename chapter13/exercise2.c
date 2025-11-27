#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

// suppose that p has been declared as follows: 
char *p = "abc";
// Which of the following fucntion calls are legal? Show the output produced by each legal call, and explain why the others are illegal.

int main( void ) {
	// putchar( p ); // shouldn't be legal, we supply a sting not a char, but then, it is just a pointer to element 1 so it might work.
	putchar( *p );
	puts( p );
	// puts( *p ); // shouldn't work bcs we supply puts with a char not with a string.

	return 0;
}
