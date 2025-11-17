#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define p printf

// Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.

int main ( void ) {
	char end = 0;
	char sent[50];
	int x = 0, wl = 0;

	p(" Enter a sentence: \t");

	while ( end != '.' && end != '?' && end != '!' ) end = *(sent+(x++)) = getchar();

	*(sent+(x--)) = '\0';

	end = *(sent+(x--));

	p(" Reversal of sentence: \t");
	while ( x > 0 ) {
		for ( wl = 0; *(sent+(x)) != ' ' && x >= 0; wl++, x-- );
		for ( int i = 1; i <= wl; i++ ) {
			p("%c", *(sent+(x+i)));
		}
		p(" ");
		x--;
	}
	p("\b%c\n", end);
	return 0;
}
