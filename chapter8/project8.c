#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define p printf
#define s scanf

int main ( void ) {

	int mtx[5][5];
	int r = 0;
	int sum = 0;
	
	while ( r < 5 ) {
		p("Enter Student scores %d: ", r+1);
	       	for ( int i = 0; i < 5; i++ ) s("%d", &mtx[r][i]);
		r++;
	}

	p("Toatls scores: ");

	for ( int i = 0; i < r; i++ ) {
		for ( int j = 0; j < 5; j++ ) {
			sum += mtx[i][j];
		}
		p("%3d", sum);
		sum = 0;
	}
	
	p("\n");

	p("Avrg scores: ");

	for ( int i = 0; i < 5; i++ ) {
		for ( int j = 0; j < 5; j++ ) {
			sum += mtx[i][j];
		}
		p("%3d", sum/5);
		sum = 0;
	}

	p("\n");

	return 0; 
}
