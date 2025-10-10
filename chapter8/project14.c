#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define p printf

int main ( void ) {

	char end = 0;
	char sent[50];
	int x = 0, wl = 0;

	p(" Enter a sentence: \t");

	while ( end != '.' && end != '?' && end != '!' ) end = sent[x++] = getchar();

	sent[x--] = '\0';

	end = sent[x--];

	p(" Reversal of sentence: \t");
	while ( x > 0 ) {

		for ( wl = 0; sent[x]!= ' ' && x >= 0; wl++, x-- ); 
		for ( int i = 1; i <= wl; i++ ) {
			p("%c", sent[x+i]);
		}
		p(" ");
		x--;
		
	}
	p("\b%c\n", end);
	return 0;

}				
