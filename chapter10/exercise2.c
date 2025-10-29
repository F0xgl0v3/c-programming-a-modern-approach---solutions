#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// For each of the following scopes, list all variable and parameter names visible in that scope.
// If theres's more than one variable or parameter with the same name, indicate which one is visible.
// (a) The f function
// (b) The g function
// (c) The block in which a and d are declared
// (d) The main function

int b, c;

void f( void ) {
	int b, d;
}

void g( int a ) {
	int c;
	{
		int a, d;
	}
}

int main( void ) {

	int c, d;

	printf( "(a): b(the one in the f function), d(the one in the f function), c(the external one)\n(b): a(the parameter), b(the external one), c(the one in the g function)\n" );
	printf( "(c): a(the one in the block), b(the external one), c(the one in the g function), d(the one in the block)\n(d): b(the external one), c(the one in the main function), d(the one in the main function)\n" );

	return 0;

}

