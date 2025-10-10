#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define p printf

int main ( void ) {

	char sent[100];
	char c;
	int i = 0;

	p("Enter a sentence: ");

	while ( (c = getchar()) != '\n' ) sent[i++] = c;
	sent[i] = '\0';


	for ( int j = 0; j < sizeof(sent)/sizeof(sent[0]); j++) {

		c = sent[j];
		
		switch ( toupper(c) ) {
			case 'A': sent[j] = '4';
				  break;
			case 'B': sent[j] = '8';
				  break;
			case 'E': sent[j] = '3';
				  break;
			case 'I': sent[j] = '1';
				  break;
			case 'O': sent[j] = '0';
				  break;
			case 'S': sent[j] = '5';
			default: break;
		}

	}
	
	p("In B1FF-speak: %s!!!!!!\n", sent);
	return 0;
}
