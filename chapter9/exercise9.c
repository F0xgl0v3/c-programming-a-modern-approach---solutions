// assumption: the output will be: "i = 1, j = 2\n" bcs of variable scope. a and b only exist inside of swap.
// the trap is that one could belive that i and j are swaped after the call to swap, but that isnt the case.

#include <stdio.h>

void swap( int a, int b); 

int main( void ) {
	int i = 1, j = 2;

	swap( i, j );
	printf( "i = %d, j = %d\n", i, j );
	return 0;	
}

void swap( int a, int b ) {
	int temp = a;
	a = b;
	b = temp;
}
