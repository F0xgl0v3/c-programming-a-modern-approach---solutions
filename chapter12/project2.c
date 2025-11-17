#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// (a) Write a programm that reads a message, then checks whether it's a palindrome (the letters in the message are the same from left to right as from right to left): 
// Enter a message: Ye lived as a devil, eh?
// Palindrome
//
// Enter a message: Madam, I am Adam.
// Not a palindrome
// Ignore all characters that aren't letters. Use integer varaibles to keep track of positions in the array.
// (b) Revise the program to use pointers instead of integers to keep track of positions in the array.

int main( void ) {
	char msg[100];
	char rev[100];
	char temp;
	char *p = &msg[0];
	char *q = &rev[0];

	printf( "Enter a message: " );
	while ( (temp = getchar()) != '\n' )
		*p++ = temp;
	*p = '\0';
	while ( p > &msg[0] ) 
		*q++ = *--p;
	*q = '\0';

	printf( "Message: \t%s\nReverse: \t%s\n", msg, rev );
	if( strcmp( msg, rev ) == 0 ) printf( "Palindrome\n" );	
	else printf( "Not a Palindrome\n" );
	
	return 0;
}
