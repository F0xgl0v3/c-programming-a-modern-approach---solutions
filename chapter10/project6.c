#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdbool.h>

int inttop = 0;
int chartop = 0;
int intstack[100];
char charstack[100];

void pushint( int a ) {
	if ( inttop <= 100 ) {
		intstack[inttop++] = a;
	}
	else {
		printf( "expression too complex\n" ); 		// printf( "Stack overflow" );
		exit(EXIT_SUCCESS);
	}
	return;
}

int popint( void ) {
	if ( inttop > 0 ) {
		return intstack[--inttop];
	}
	printf( "Not enought operants in expression\n" ); 	// printf( "Stack underflow" );
	exit(EXIT_SUCCESS);
	return 0;
}

// intersting, i didnt even need the char stack, but I wont delete it so if you are interested in how it is done another way you can have a look at it.
/*
void pushchar( char a ) {
	if ( inttop <= 100 ) {
		charstack[chartop++] = a;
	}
	else {
		printf( "expression too complex\n" );		// printf( "Stack overflow" );
		exit(EXIT_SUCCESS);
	}
	return;
}

char popchar( void ) {
	if ( chartop > 0 ) {
		return charstack[--chartop];
	}
	printf( "Not enought operaors in expression\n" ); 	// printf( "Stack underflow\n" );
	exit(EXIT_SUCCESS);
	return '0';
}
*/

void flushintstack( void ) {
	inttop = 0;
	return;
}
/*
void flushcharstack( void ) {
	chartop = 0;
	return;
}
*/

bool isop( char a ) {
	if ( a == '+' || a == '-' || a == '*' || a == '/' || a == '%' || a == '=' ) return true;
	else return false;
}

int main( void ) {

	long long res = 0;
	int a, b;

	printf( "Enter an RPN expression: " );

	char in = getchar();

	while ( in != '\n' ) {

		while ( isdigit( in ) ) {
			pushint( (int) in - '0' );	
			in = getchar();
		}

		while ( isop(  in  ) ) {
									// pushchar( in );
									// in = getchar();
									//
									// while ( chartop > 0 ) {
				b = popint();
				a = popint();
				switch( in ) {				// switch ( popchar() ) {
					case '*':
						pushint( a * b ); 	// pushint( popint() * popint() );
						break;
					case '+':
						pushint( a + b ); 	// pushint( popint() + popint() );
						break;
					case '-':
						pushint( a - b );	// pushint( popint() - popint() );
						break;
					case '/':
						pushint( a / b ); 	// pushint( popint() / popint() );
						break;
					case '%':
						pushint( a % b ); 	// pushint( popint() % popint() );
						break;
					default: 
						printf( "Erroar\n" );
						break;
				}
			// get next operator
			in = getchar();		

			}			
		}
	
	
	printf( "Value of expression: %lld\n", (long long)popint() );

	return 0;
}
