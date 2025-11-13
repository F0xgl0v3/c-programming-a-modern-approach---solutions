#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the assignemt p = a has just been performed, which of the following expressions are illegal because of mismatched types?
// Of the remaining expressions, which are true ( have a nonzero value )?

int main( void ) {
	int a[3] = { 1, 2, 3 };
	int *p = &a[0];

	p == a[0];	// illegal
	p == &a[0];	// legal
	*p == a[0]; 	// legal
	p[0] == a[0];	// legal
	
	// try compiling it with gcc, this will prove it 

	return 0;
}
