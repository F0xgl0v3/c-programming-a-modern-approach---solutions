#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main ( void ) {

	double val = 0, arg = 0, frac = 0, divisor = 1;
	char c = 0, op = 0;
	bool first = true;

	printf("Enter an expression: ");

	do {
		
	// null arg and frac
	arg = 0.0f;
	frac = 0.0f;
	divisor = 1;
	c = getchar();

	// parse number
	do {	
		arg *= 10.0f;
		arg += ( c - '0' );
		c = getchar();
	} while ( isdigit(c) );

	if( c == '.' ) {
		c = getchar();
		do {
			frac *= 10.0f;
			frac += (double) ( c - '0' );
			divisor /= 10.0f;
			c = getchar();
		} while ( isdigit(c) );
		frac *= divisor;
		arg += frac;
	}
	
	// first number?
	if ( first ) {
		val = arg;
		first = false;
		if ( c == '\n' ) break;
		op = c;
		continue;
	}

	// calculate
	if ( op == '+' ) val = val + arg;
	if ( op == '-' ) val = val - arg;
	if ( op == '*' ) val = val * arg;
	if ( op == '/' ) val = val / arg;
	op = c;

	} while ( c != '\n' );

	printf("%.2lf\n", val);
	return 0;

}
