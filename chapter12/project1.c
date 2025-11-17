#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

// (a) Write a programm that reads a message, then prints the reversal of the message:
// Ender a message: Don't get mad, get even.
// Reversal is : .neve teg ,dam teg t'noD
// Hint: Read the message one character at a time (using getchar) and store the characters in an array. Stop reading when the array is full or the character reads is '\n'
// (b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array.

int main( void ) {
	char *msg = malloc( sizeof(char) * 50 );
	char *end = malloc( sizeof(char) * 50 );
	char temp;
	int i = 0;

	printf( "Enter a message: \t" );
	while ( (temp = getchar()) != '\n' ) {
		msg[i++] = temp;	
	}
	msg[i] = '\0';
	end = &msg[0];

	while( *end != '\0' )
		end++;
	end--;

	for( char *p = msg; p < end; p++, end-- ) {
		temp = *p;
		*p = *end;
		*end = temp;
	}


	printf( "Reversed: \t\t%s\n", msg );

	free( msg );
	return 0;
}
