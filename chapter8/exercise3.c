#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main ( void ) {
		
	bool weekend[7] = { true, [6] = true };
	char *word;

	for ( int i = 0; i < 7; i++ ) {
		if( weekend[i] ) {
			word = "true";
		}
		else {
			word = "false";
		}
		printf("%s ", word);
	}

	printf("\n");
	return 0;
}
