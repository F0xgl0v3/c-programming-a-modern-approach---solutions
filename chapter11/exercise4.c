#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void swap( int *p, int *q );

int main( void ) {
	
	int a = 2, b = 4;			

	printf( "a: %d, b: %d\n", a, b );
	swap( &a, &b );
	printf( "swaping\na: %d, b: %d\n", a, b );

	return 0;
}

void swap( int *p, int *q ) {

	int tmp = *p;
	*p = *q;
	*q = tmp;

	return;
}
