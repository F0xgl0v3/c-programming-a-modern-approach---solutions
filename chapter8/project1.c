#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main ( void ) {

	long n = 0;
	bool rep = false;
	printf("Enter a number: ");
	scanf("%d", &n);

	bool seen[10][2] = { { false }, { false } };

	while ( n > 0 ) {
		if( seen[n%10][0] ) seen[n%10][1] = true;
		else seen[n%10][0] = true;
		n /= 10;
	}

	for ( int i = 0; i < 10; i++ ) {
		if ( seen[i][1] == true ) {
			rep = true;
			break;
		}
	}

	if ( rep ) {
		printf("Repeated digit(s): ");
		for ( int i = 0; i < 10; i++ ) {
			if ( seen[i][1] ) printf(" %d", i);
		}
		printf("\n");
	} 
	else {
		printf("No duplicates\n");
	}

	return 0;
}
