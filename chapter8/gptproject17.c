#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( void ) {

	int size;
	int num = 1;

	printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
	scanf("%d", &size);

	int x[size][size];

	// null the matrix
	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			x[i][j] = 0;
		}
	}

	// create the matrix
	int r = 0, c = size/2;

	// gpt style
    while (num <= size * size) {
        if (x[r][c] == 0) {
            x[r][c] = num++;
            r--; // Move up
            c++; // Move right
        } else {
            r += 2; // Move down two rows
            c--; // Move left one column
        }

        // Wrap around if out of bounds
        if (r < 0) r += size; // Wrap around to the bottom
        if (c >= size) c -= size; // Wrap around to the left
        if (r >= size) r -= size; // Wrap around to the top
        if (c < 0) c += size; // Wrap around to the right
    }

/*	
	while ( num <= size*size ) {

		if ( x[r][c] == 0 ) {
			x[r][c] = num++;
		}	
		else {
			r = r + 3;
			if ( r > size-1 ) r = r - (size-1);

			c = c - 2; 
			if ( c < 0 ) c = (size-1) + c;
		}

		if ( r <= 0 ) {
			r = (size-1) - r; 
		}
		else {
			r--;
		}

		if ( c >= size-1 ) { 
			c = c - (size-1);
		}
		else {
			c++;
		}

	}
*/

	// print the matrix
	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}
