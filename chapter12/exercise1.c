#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main( void ) {

	int a[] = { 5, 15, 34, 54, 14, 2, 52, 72 };
	int *p = &a[1], *q = &a[5];

	printf( "a) *(p+3) = a[4] = 14, check: %d\n", *(p+3) );
	printf( "b) *(q-3) = a[2] = 34, check %d\n", *(q-3) );
	printf( "c) q-p = 4, check: %d\n", (q-p) );
	printf( "d) p < q = true(1), check: %d\n", (p<q) );
	printf( "e) *p < *q = false(0), check: %d\n", (*p<*q) );
	return 0;

}
