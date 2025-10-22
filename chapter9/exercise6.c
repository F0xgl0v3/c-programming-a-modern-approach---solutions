#include <stdio.h> 
#include <stdlib.h>

int digit ( int number, int digit_index );

int main ( void ) {
	int number, index;
	printf( "Enter a number: " );
	scanf( "%d", &number );
	printf( "Which digit to print: " );
	scanf( "%d", &index );
	printf( "The digit is: %d\n", digit( number, index ) );
	return 0;
}

int digit ( int n, int k ) {
	int div=1;
	for ( int i=0; i < k; i++ ) {
		div *= 10;	
	}	
	n = n%div;
	while ( (div/10) > 1 ) {
		n /= 10;
		div /= 10;
	}
	return n;
}
