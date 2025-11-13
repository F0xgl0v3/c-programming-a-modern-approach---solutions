#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// suppose that high, low and middle are all pointer variables of the same type, and that low and high point to elemnts of an array.
// Why is the following statement illegal, and how could it be fixed?
// middle = ( low + high ) / 2;

int main( void ) {
	
	printf( "the expression is wrong because the addition of pointers is not allowed.\na corrected version could look like this:\nmiddle = low + ( high - low ) / 2\n" );
}
