#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcnlt.h>

// Write the evaluate_position function described in Exercise 13 of Chapter 9. Use pointer artihmetic -not subscripting- to visit array elemts. Use a single loop insted of nested loops.

// This function is suppoesd to evaluate a chess position.
int evaluate_position( char ** board );
void boardgen( char **board );
int evalfield( char **board, int row, int column );
void printboard( char **board, int size );

int main ( void ) {
	char ** board;
	// how this was probably intended:
	// char * board[8] = malloc( sizeof(int*) * 8 );
	// so we can pass a argument of type char (*)[8] to the funciton. instead of a **b argument.
	// alternativly, we could allocate a single block of memory, like to char 
	//
	// #define index(r, c) ( (r) * columns + (c) )
	// int rows = 8, columns = 8;
	// char *board = malloc ( sizeof( int ) * rows * columns )
	// so we will be able to access the element we want like so: board[index(r,c)]
	// seemingly this is how the compiler does it anyway incase of mulidimensional arrays
	
	board = malloc( sizeof(int*) * 8 );
	for ( int i=0; i < 8; i++ ) {
		board[i] = malloc( sizeof( int ) * 8 );
	}
	boardgen( board );
	printboard( board, 8 );
	printf( "The total value of the Position: %d\n", evaluate_position( board ) );

	for ( int i = 0; i < 8; i++ ) {
		free( board[i] );
	}
	free( board );
	return 0;
}

int evaluate_position( char **b ) {
	int sum=0;
	for ( int r = 0; r < 8; r++ ) {
		for ( int c = 0; c < 8; c++ ) {
			sum += evalfield( b, r, c );
		}
	}
	return sum;
}

int evalfield( char **b, int r, int c ) {
	int ret = 0;
	switch ( b[r][c] ) {
		case( 'Q' ): 
			ret = 9;
			break;
		case( 'B' ):
			ret = 3;
			break;
		case( 'N' ):
			ret = 3;
			break;
		case( 'R' ):
			ret = 5;
			break;
		case( 'P' ):
			ret = 1;
			break;
		case( 'q' ):
			ret = -9;
			break;
		case( 'b' ):
			ret = -3;
			break;
		case( 'n' ):
			ret = -3;
			break;
		case( 'r' ):
			ret = -5;
			break;
		case( 'p' ):
			ret = -1;
			break;
		default:
			break;
	}
	return ret;
}

void boardgen( char **board ) {
	char bag[64]; 
	char temp;
	int idx = 0;
	unsigned int j = 0;
	int fd;
	fd = open( "/dev/urandom", O_RDONLY );

	bag[idx++] = 'K'; 
	bag[idx++] = 'Q'; 
	bag[idx++] = 'k';
	bag[idx++] = 'q';
        for ( int i = 0; i < 2; i++ ) {
	bag[idx++] = 'R';		
	bag[idx++] = 'r';
	}
        for ( int i = 0; i < 2; i++ ) {
	bag[idx++] = 'B';		
	bag[idx++] = 'b';
	}
        for ( int i = 0; i < 2; i++ ) {
	bag[idx++] = 'N';		
	bag[idx++] = 'n';
	}
        for ( int i = 0; i < 8; i++ ) {
	bag[idx++] = 'P';		
	bag[idx++] = 'p';
	}
	while ( idx < 64 ) bag[idx++] = '.';
			
	for( int i = 63; i > 0; --i ) {
		read( fd, &j, sizeof j );
		j %= ( i+1 );
		temp = bag[i];
		bag[i] = bag[j];
		bag[j] = temp;
	}

	for ( int col = 0; col < 8; col++ ) {
		for ( int row = 0; row < 8; row++ ) {
			idx--;
			board[row][col] = bag[idx];
		}
	}

	close( fd );
	return;
}

void printboard( char **b, int size ) {
	char idx[8];
	for( int i = 0; i < size; i++ ) {
		switch ( i ) {
			case ( 0 ): 
				idx[i] = 'a';
				break;
			case ( 1 ):
				idx[i] = 'b';
				break;
			case ( 2 ):
				idx[i] = 'c';
				break;
			case ( 3 ):
				idx[i] = 'd';
				break;
			case ( 4 ):
				idx[i] = 'e';
				break;
			case ( 5 ):
				idx[i] = 'f';
				break;
			case ( 6 ):
				idx[i] = 'g';
				break;
			case ( 7 ):
				idx[i] = 'h';
				break;
			default:
				break;
		}
	}

	printf( "\n\t" );
	for( int i = 0; i < size; i++ ) {
		printf( "  %d ", i+1 );
	}
	printf( "\n\n" );
				    
	for( int i = 0; i < size; i++ ) {
		printf( "%c\t", idx[i] );
		for( int j = 0; j < size; j++ ) {
			printf( "| %c ", b[j][i] );
		}
		printf( "|\n" );
	}
	printf( "\n" );
	return; 
}
