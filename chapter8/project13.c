#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>

int main ( void ) {

	char n = 0;
	char fname[20], lname[20];
	int i = 0;

	printf("Enter a first and last name : ");
				
	while ( n != ' ' ) {

		n = getchar();
		fname[i] = n;
		i++;

	}
	fname[i] = '\0';

	i = 0;

	while ( n != '\n' ) {

		n = getchar();
		lname[i] = n;
		i++;

	}		
	lname[i] = '\0';

	printf("%s\b, %c.\n", lname, fname[0]);
	return 0;
}
