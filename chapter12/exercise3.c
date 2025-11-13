#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define N 10

int main( void ) {	
	
	// What will be the contets of the a array after the following statements are executed
	int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = &a[0], *q = &a[N-1], temp;

	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}

	printf( "these statements should reverse the array.\n" );

	q -= 5;
	while ( ++q < &a[N] ) {
		printf( "%d ", *q );
	}
	printf( "\n" );

	return 0;
}
