#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main ( void ) {

	char board[10][10];
	char c = 'A';
	int dir = 0;
	int posx = 0, posy = 0;
	srand(time(NULL));


	for ( int i = 0; i < 10; i++ ) {

		for ( int j = 0; j < 10; j++ ) {
			board[i][j] = '.';
		}

	}		


	while ( ( c - 'A' ) < 26 ) {	
	
		board[posx][posy] = c;
		if ( board[posx-1][posy] != '.' && board[posx+1][posy] != '.' && board[posx][posy-1] != '.' && board[posx][posy+1] != '.' ) break;
		c++;

newrand:		
		dir = rand()%4;
		
		switch ( dir ) {
			case 0: if ( posy-1 >= 0 && board[posx][posy-1] == '.' ) posy = posy - 1;	// dir 0 is up
				else goto newrand;
				break;
			case 1:	if ( posx+1 < 10 && board[posx+1][posy] == '.' ) posx = posx + 1; 	// dir 1 is right 
				else goto newrand;
				break;
			case 2: if ( posy+1 < 10 && board[posx][posy+1] == '.' ) posy = posy + 1; 	// dir 2 is down 
				else goto newrand;
				break;
			case 3: if ( posx-1 >= 0 && board[posx-1][posy] == '.') posx = posx - 1; 	// dir 3 is left
				else goto newrand;
				break;
			default: 
				break;
		}
		
		
	}


	for ( int i = 0; i < 10; i++ ) {

		for ( int j = 0; j < 10; j++ ) {
			printf(" %c", board[i][j]);
		}
		printf("\n");

	}


	return 0;
}	
