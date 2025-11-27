#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Suppose that we call scanf as follows:
// scanf( "%d%s%d", &i, s, &j );
// If the user enters 12abc12 56def78, what will be the values of i, s and j after the call? ( Assume that i and j are int variables and s is an array of characters. )

int main( void ) {
	int i, j;
	char s[4];
	scanf( "%d%s%d", &i, s, &j );
	printf( "%d%s%s\n", &i, s, &j );
	return 0;
}
