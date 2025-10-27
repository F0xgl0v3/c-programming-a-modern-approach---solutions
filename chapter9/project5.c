#include <unistd.h>
#include <fcntl.h>

// Modify the Programming Project 17 form Chapter 8 so that it includes the following functions: 
// void create_magic_square ( int n, char magic_square[n][n] );
// void print_magic_square( int n, char magic_sqaure[n][n] );
// After obtaining the number n from the user, main will call create_magic_square, passing it an n x n array that is declared insidemain. create_magic_square will fill the array with the numbers 1, 2, ..., n^2
// as described in the original project. main will then call print_magic_square, which will display the array in the format described in the original projet. Note: If your compiler doesn't support variable-length arrays, 
// declare the array in main to be 99x99 instead of n x n and use the following prototypes instead:
// void create_magic_sqaure ( int n, char magic_square[99][99] );
// void print_magic_square( int n, char magic_square[99][99] );

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void create_magic_square( int n, int magic_square[n][n] );
void print_magic_square( int n, int magic_square[n][n] );

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

	// create magic square
	create_magic_square( size, x );	

	// print matrix
	print_magic_square( size, x );

	return 0;
}

void create_magic_square( int size, int x[size][size] ) {
	
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

	return;
}

void print_magic_square( int size, int x[size][size] ) {

	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			printf("%5d", x[i][j]);
		}
		printf("\n");
	}

	return;
}
