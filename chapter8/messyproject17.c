#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 99
#define min 1

int main ( void ) {

	int n = 0;
	int num = 1, r = 0, c = 0;

	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	// srand(time(NULL));
	// num = rand() % ( max - min + 1 ) + min;

	int x[n][n];
	r = n/2;
	c = 0;

	// initalize 
	
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			x[i][j] = 0;
		}
	}

	// fill the square
	
	while ( num <= n*n ) {
		if ( x[r][c] == 0 ) {	
			x[r][c] = num++;
		}
		else {
			c = c + 2;
			if ( c > n - 1 ) c = c - (n - 1);
			r = r - 1;
			if ( r < 0 ) r = (n - 1) + r;
			continue;
		}

		if ( r == 4 ) r = 0;
		else r++;
		if ( c == 0 ) c = 4;
		else c--;

	}

	// print the square
	
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			printf("%5d", x[j][i]);
		}
		printf("\n");
	}

	return 0;
}
