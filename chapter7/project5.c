#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main ( void ) {
	
	int value = 0;
	char n = 0;

	printf("Enter a word : ");
	
	toupper(n); 							// its just + 32 lel , wait ... is that really true ?_? could it be that it checks for lower case ?_? let me ceck! yyoooo it does , what a nice function :3

	while ( n != '\n' ) {

		n = getchar();
//		if ( n >= 97 && n <= 122 ) n = toupper(n);
		
		n = toupper(n);

		switch ( n ) {

			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
				value += 1;
				break;
			case 'D': case 'G':
				value += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				value += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				value += 4;
				break;
			case 'K':
				value += 5;
				break;
			case 'J': case 'X':
				value += 8;
				break;
			case 'Q': case 'Z':
				value += 10;
				break;
			default :
				break;

		}

	}

	printf("Scrabble value : %d\n", value);
	// printf("%d, %d, %d, %d\n", 'A', 'Z', 'a', 'z');

	return 0;

}
