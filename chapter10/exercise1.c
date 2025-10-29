#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// for each of the following scopes, list all variable and parameter names visible in the scope:
// (a) The f function
// (b) The g function
// (c) The block in which e is declared
// (d) The main function

int a;

void f( int b ) {
	int c;
}

void g( void ) { 
	int d;
	{
		int e;
	}
}

int main( void ) {

	int f;
	printf( "(a): a, b, c\n(b): a, d\n(c): a, d, e\n(d): a, f\n" );
	return 0;

}


