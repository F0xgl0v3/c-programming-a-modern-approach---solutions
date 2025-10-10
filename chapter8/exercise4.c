#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
	
	int fibn[40] = { 1, 1 };

	printf("Print fibonacci numbers\n");

	for( int i = 2; i < 40; i++ ) {
		fibn[i] = fibn[i-1] + fibn[i-2];
	}	

	for ( int i = 0; i < 40; i++ ) {
		printf("%d ", fibn[i]);
	}	

	printf("\n");
	return 0;
}
