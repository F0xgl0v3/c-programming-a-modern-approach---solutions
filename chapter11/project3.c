#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define p printf
#define s scanf

void reduce( int numerator, int denominator, int *reduced_numerator, int *reduced_denominator );

int main ( void ) {
	int num = 0, den = 0;
	
	p("Enter a fraction: ");
	s("%d / %d", &num, &den);

	reduce( num, den, &num, &den );

	p("In lowest terms: %d/%d\n", num, den);
	
	return 0;

}

void reduce( int num, int den, int *reduced_numerator, int *reduced_denominator ) {
	
	int temp;

	// calculate gcd
	while ( num != 0 ) {
		temp = den % num;
		den = num;
		num = temp;
	}
	
	// reduce by gcd
	*reduced_numerator /= den;
	*reduced_denominator /= den;

	return;

}
