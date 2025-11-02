#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define p printf

// if i is a variable and p points to i which of the following expressions are aliases for i?

int main( void ) {

	p( "(a) *p  - yes - this is an alias for i\n" );
	p( "(b) &p  - no  - is not an alias for i, it is the address of the pointer p\n" );
	p( "(c) *&p - no  - is not an alias for i, it is just plain p\n" );
	p( "(d) &*p - no  - is not an alias for i, it is just plain p and basically the same the one above\n" );
	p( "(e) *i  - no  - is not an alias for i, is the value of the variable that i points to, if i is a pointer, otherwise its illegal\n" );
	p( "(f) &i  - no  - is not an alias for i, it is the address of i and should therefor be equivalent to p\n" );
	p( "(g) *&i - yes - is an alias for i, since * and & cancle eachother out\n" );
	p( "(h) &*i - yes - is an alias for i, since & and * cancle eachother out\n" );

	return 0;
}
