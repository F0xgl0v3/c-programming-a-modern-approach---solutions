#include <stdio.h>

int main ( void ) {
	int n = 0, m = 0;

	for ( n = 0; m > 0; n++ ) m /= 2;

	for ( n = 0; m > 0; n++, m/=2 );

	return 0;
}
