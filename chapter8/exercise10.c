#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ( void ) {

	char chessboard[8][8] =	{ { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
				  { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
				  { ' ', '.', ' ', '.', ' ', '.', ' ', '.' }, 
				  { '.', ' ', '.', ' ', '.', ' ', '.', ' ' }, 
				  { ' ', '.', ' ', '.', ' ', '.', ' ', '.' }, 
				  { '.', ' ', '.', ' ', '.', ' ', '.', ' ' }, 
				  { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
	        		  { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' } };

	for ( int i = 0; i < 8; i++ ) {
		for ( int j = 0; j < 8; j++ ) {
			printf(" %c", chessboard[i][j]);
		}
		printf("\n");
	}

	return 0;
}
