#include <unistd.h>
#include <fcntl.h>

// Modify the Programming Project 9 form Chapter 8 so that it includes the following funcitons:
// void generate_random_walk ( char walk[10][10] );
// void print_array ( char walk[10][10] );
// main first calls generate_random_walk, which initializes the array to contain '.' characters and then replaces some of these characters by the letters A through Z, as described in he original project, 
// main then calls print_array to display the array on the screen.

#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main ( void ) {

	char walk[10][10];
	generate_random_walk( walk );
	print_array( walk );	
	return 0;
}	

void generate_random_walk( char walk[10][10] ) {

	char c = 'A';
	int dir = 0;
	int posx = 0, posy = 0;

	srand(time(NULL));

	for ( int i = 0; i < 10; i++ ) {

		for ( int j = 0; j < 10; j++ ) {
			walk[i][j] = '.';
		}

	}		

	while ( ( c - 'A' ) < 26 ) {	
	

	newrand:		
		dir = rand()%4;
		
		switch ( dir ) {
			case 0: if ( posy-1 >= 0 && walk[posx][posy-1] == '.' ) posy = posy - 1;	// dir 0 is up
				else goto newrand;
				break;
			case 1:	if ( posx+1 < 10 && walk[posx+1][posy] == '.' ) posx = posx + 1; 	// dir 1 is right 
				else goto newrand;
				break;
			case 2: if ( posy+1 < 10 && walk[posx][posy+1] == '.' ) posy = posy + 1; 	// dir 2 is down 
				else goto newrand;
				break;
			case 3: if ( posx-1 >= 0 && walk[posx-1][posy] == '.') posx = posx - 1; 	// dir 3 is left
				else goto newrand;
				break;
			default: 
				break;
		}

		walk[posx][posy] = c;
		if ( walk[posx-1][posy] != '.' && walk[posx+1][posy] != '.' && walk[posx][posy-1] != '.' && walk[posx][posy+1] != '.' ) break;
		c++;
	
	}

}

void print_array( char walk[10][10] ) {

	for ( int i = 0; i < 10; i++ ) {

		for ( int j = 0; j < 10; j++ ) {
			printf(" %c", walk[i][j]);
		}
		printf("\n");

	}

}
