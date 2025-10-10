#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main ( void ) {

	char checkerboard[8][8];
	bool swap = true;

	for ( int i = 0; i < 8; i++ ) {
		for ( int j = 0; j < 8; j++ ) {
			checkerboard[i][j] = swap ? 'B' : 'R';
			swap = !swap;
		}
		swap = !swap;
	}

	for ( int i = 0; i < 8; i++ ) {
		for ( int j = 0; j < 8; j++ ) {
			printf(" %c", checkerboard[i][j]);
		}	
		printf("\n");
	}

	return 0;
}
