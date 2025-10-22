#include <stdio.h>
#include <stdlib.h>

int num_digits( int n );

int main ( void ) {
	int n;
	printf( "Enter a number: " );
	scanf( "%d", &n );
	printf( "Digits in number: %d\n", num_digits( n ) );
	return 0;
}

int num_digits( int n ) {
	int num = 0;
	while ( n > 0 ) {
		n /=10;
		num++;	
	}
	return num;
}
