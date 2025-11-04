#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void pay_amount( int dollarss, int *twenties, int *tens, int *fives, int *ones );

int main( void ) {

	int dollars=0;
	int b20, b10, b5, b1;

	printf( "Enter a dollars amount: " );
	scanf( " %d", &dollars );
	pay_amount( dollars, &b20, &b10, &b5, &b1 );
	printf( "\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", b20, b10, b5, b1 );

	return 0;
}

void pay_amount( int dollars, int *b20, int *b10, int *b5, int *b1 ) {
	
	if ( dollars >= 20 ) {
		*b20 = dollars / 20;
		dollars %= 20;
	}
	if ( dollars >= 10 ) {
		*b10 = dollars / 10;
		dollars %= 10;
	}
	if ( dollars >= 5 ) {
		*b5 = dollars / 5;
		dollars %= 5;
	}
	*b1 = dollars;
	
	return;
}
