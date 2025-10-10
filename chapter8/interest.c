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
	for ( i = 0; i < NUM_RATES; i++ ) {
		p("%6d%%", lowrate + i );
		value[i] = INITIAL_BALANCE;
	}
	p("\n");

	for ( year = 1; year <= numyears; year++ ) {
		p("%3d     ", year);
		for ( i = 0; i < NUM_RATES; i++ ) {
			value[i] += (lowrate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}

	return 0;
}
