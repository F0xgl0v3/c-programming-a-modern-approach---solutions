#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ( void ) {

	char n = 0;
	int vowels = 0;

	printf("Enter a sentence : "); 

	while ( n != '\n' ) {
	
		n = getchar();
		n = toupper(n);

		if( n > 64 && n < 91 ) {
			if ( n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U' ) vowels++;
		}

	}

	printf("Number of vowels : %d\n", vowels);

	return 0;

}
