#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define p printf
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main ( void ) {

	int i, lowrate, numyears, year;
	double value[5];

	p("Enter interest rate: ");
	scanf("%d", &lowrate);
	p("Enter number of years: ");
	scanf("%d", &numyears);

	p("\nYears");

	// load array 
	for ( int l = 0; l < NUM_RATES; l++ ) {
		value[l] = INITIAL_BALANCE;
	}

	for ( year = 1; year <= numyears; year++ ) {

	for ( i = 0; i < NUM_RATES; i++ ) {

		p("\t");
		for ( int j = 0; j < 11; j++ ) {
			p("%6c%d", 'm', j+1);
		}
		p("%6d%%", lowrate + i );
		p("\n");
		
					
		p("%3d    \t  ", year);
		for ( int k = 0; k < 12; k++ ) {
			value[i] += ((lowrate+i) / 12.0 / 100.0 * value[i]);
			p("%7.2f", value[i]);
		}
		p("\n");

	}
	p("\n");

	}

	return 0;
}
