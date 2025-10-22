#include <stdio.h>

int main ( void ) {
	printf( "void f( double x ); \tis legal\nvoid f( double ); \tis legal\nvoid f(x); \t\tis illegal bcs omiting parameter type is illegal\nf(double x); \t\tis illegal bcs omiting the return type is illegal\n" );
	return 0;
}
