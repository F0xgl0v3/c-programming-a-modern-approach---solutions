#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( void ) {

	int size = 0;
	
	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
	scanf("%d", &size);

	int x[size][size];

	// null matrix
	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			x[i][j] = 0;
		}
	}

	int r = 0;
	int c = size/2;
	int num = 1;
		
	
	while ( num <= size*size ) {
	
		// if free element write 
		if ( x[r][c] == 0 ) {	
			x[r][c] = num++;
			r -= 1;
			c += 1;
		}
		// else jump to below previous element 
		else { 
			r += 2;
			c -= 1;
		}
		
		// if out of bounds correct
		if ( r < 0 ) r += size;
		if ( r >= size ) r -= size;
		if ( c < 0 ) c += size;
		if ( c >= size ) c -= size;
		

	}	

	// print matrix
	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			printf("%5d", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}
