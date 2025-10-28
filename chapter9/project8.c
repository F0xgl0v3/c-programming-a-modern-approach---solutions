#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// craps
// 7 and 11 win.
// 2, 3 or 12 lose.
// every other roll, becomes "the point".
// if the player rolls "the point" on a subsequent roll, they win.
// also, if the player has set the point, if they roll a 7, they lose, no other roll is relevant.

int roll( void );
int rollsrand( void );

int main ( void ) {

	unsigned int val = 0, point = 0, wins = 0, losses = 0;
	char a = '0';
	bool first = true, gameover = false;

	while ( true ) {
		sleep( 1 );

		// roll the dice
		if ( !(gameover) ) {
			val = roll();
			printf( "You rolled: %d\n", val );
		}

		// first roll
		if ( first ) {

			// winning values 7 and 11
			if ( val == 7 || val == 11 ) {
				printf( "You win!\n" );
				wins++;
				gameover = true;
			}
			else { 

				// losing values 2, 3 and 12
				if ( val == 2 || val == 3 || val == 12 ) {
					printf( "You Lose!\n" );
					losses++;
					gameover = true;
				}

				// set point
				else {
					sleep( 1 );
			  		printf( "Your point is %d\n", val );
			       		point = val;
				}
			}
			first = false;
			continue;
		}

		// subsequent rolls
		// losing value 7
		if ( val == 7 && !(gameover) ) {
			printf( "You Lose!\n" );
			losses++;
			gameover = true;
		}

		// winning value point
		else if ( val == point ) {
			printf( "You Win!\n" );
			wins++;
			gameover = true;
		}
	

		if ( gameover == true ) {
			printf( "\nPlay again?: " );
			a = getchar();
			// scanf( "%c", &a );
			// appearently we have to flush the standard input stream buffer, stdin
			while( getchar() != '\n');
			printf( "\n" );
			if ( a != 'y' && a != 'Y' ) {
				printf( "Wins: %d Losses: %d\n", wins, losses );
				break;	
			}
			gameover = false;
			first = true;
			point = 0;
		}
	}
}

int roll( void ) {
	
	int fd;
	unsigned int d1, d2, result;

	fd = open( "/dev/urandom", O_RDONLY );
	read( fd, &d1, sizeof d1 );
	d1 = d1%6 + 1;

	read( fd, &d2, sizeof d2 );
	d2 = d2%6 + 1;
	
	close( fd );

	result = d1+d2;

	return result;
}

int rollsrand( void ) {
	
	unsigned int d1, d2, result;
	srand(time(NULL));

	d1 = rand();
	d1 = d1%6 + 1;

	d2 = rand();
	d2 = d2%6 + 1;

	result = d1+d2; 
	
	return result;
}
