#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_DIGITS 10

int top = 0, size = 0;
int digits[MAX_DIGITS][4][3], stack[420];

void push( char a ) {
	if ( top <= 100 ) stack[top++] = a;
	else printf( "overflow; item wasn't added\n" );
	return;
}
char pop( void ) {
	if( top > 0 ) return stack[--top];
	else printf( "underflow\n" );
	return '0';
}
void clearstack( void ) {
	top = 0;
	return;
}
// prototypes
void buildlines( void );
void printdigits( void );

			/*0, 1, 2, 3, 4, 5, 6*/ // relevant indexes: row1 : 0 row2: 5, 6, 1 row3: 4, 3, 2
int segments[10][7] = { { 1, 1, 1, 1, 1, 1, 0 },
			{ 0, 1, 1, 0, 0, 0, 0 },
			{ 1, 1, 0, 1, 1, 0, 1 },
			{ 1, 1, 1, 1, 0, 0, 1 },
			{ 0, 1, 1, 0, 0, 1, 1 },
			{ 1, 0, 1, 1, 0, 1, 1 },
			{ 1, 0, 1, 1, 1, 1, 1 },
			{ 1, 1, 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 1 },
			{ 1, 1, 1, 1, 0, 1, 1 } };

int main( void ) {  // <-- MAIN

	char in;	
	int i = 0;
	
	printf( "Enter a number: " );	

	while ( ( in = getchar() ) != '\n' && i < MAX_DIGITS ) {
		if ( isdigit( in ) ) {
			digits[i++][0][0] = (int) in - '0';
			size++;
		}
	}

	buildlines();
	printdigits();

	return 0;
}	

void buildlines( void ) {

	for ( int i = 0; i < size; i++ ) {
		// build row1 ( 3. dimension is the row. 1. dimension stores the number. 2. dimension is the line )
		digits[i][1][0] = segments[(digits[i][0][0])][0];
		// build row2 ( 3. dimension is the row. )
		digits[i][2][0] = segments[(digits[i][0][0])][5];
		digits[i][2][1] = segments[(digits[i][0][0])][6];
		digits[i][2][2] = segments[(digits[i][0][0])][1];
		// build row3 ( 3. dimension is the row.[0] )
		digits[i][3][0] = segments[(digits[i][0][0])][4];
		digits[i][3][1] = segments[(digits[i][0][0])][3];
		digits[i][3][2] = segments[(digits[i][0][0])][2];
	}

	// push the segments line by line, digit by digt. first digit last.
	// line 3 always push ' ', conditional push seg '5', conditional push seg '6', conditional push seg '1'
	for ( int i = size-1; i >= 0; i-- ) {
		if( digits[i][3][2] ) push( '|' );
		else push( ' ' );
		if( digits[i][3][1] ) push( '_' );
		else push( ' ' );
		if( digits[i][3][0] ) push( '|' );
		else push( ' ' );
		push( ' ' );
	}
	// line 2 always push ' ', conditional push seg '4', conditional push seg '3', conditional push seg '2'
	for ( int i = size-1; i >= 0; i-- ) {
		if( digits[i][2][2] ) push( '|' );
		else push( ' ' );
		if( digits[i][2][1] ) push( '_' );
		else push( ' ' );
		if( digits[i][2][0] ) push( '|' );
		else push( ' ' );
		push( ' ' );
	}
	// line 1 always push ' ', push ' ', conditional push seg '0' , push ' '
	for ( int i = size-1; i >= 0; i-- ) { 
		push( ' ' );
		if( digits[i][1][0] ) push( '_' );
		else push( ' ' );
		push( ' ' );
		push( ' ' );
	}
}

// the way we want to do it is create each line, then push them onto the stack, last one first
// this function prints our digits

void printdigits( void ) {
	// line one 
	for ( int i = 0; i < 4*size; i++ ) {
		printf( "%c", pop() );
	}
	printf( "\n" );
	for ( int i = 0; i < 4*size; i++ ) {
	// line two
		printf( "%c", pop() );
	}
	printf( "\n" );
	for ( int i = 0; i < 4*size; i++ ) {
	// line three
		printf( "%c", pop() );
	}
	printf( "\n" );
}

/*
// how it looks like to print a single digit.
printf( " %c%c%c", fucntion() );
printf( " %c%c%c", fucntion() );
printf( " %c%c%c", fucntion() );
*/


/*

  ╱|、
 (˚ˎ 。7
 |、˜〵
じしˍ,)ノ

I-V4.2

*/
