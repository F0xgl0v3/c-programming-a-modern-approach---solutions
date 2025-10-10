#include <stdio.h>

int main ( void ) {
	int i = 0;

	for ( ; i < 20; i++ ) {
		if ( i % 2 == 0 ) continue;
		printf(" %d\n", ( i + 5 ));
	}

	for ( i = 0; i < 20; i++ ) {
		if ( i % 2 == 0 ) goto cake;
		printf(" %d\n", ( i + 5 ));
		cake: ;
	}
	
	return 0;
}
