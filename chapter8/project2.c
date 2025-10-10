#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main ( void ) {

	long n = 0;
	bool rep = false;
	printf("Enter a number:\t ");
	scanf("%d", &n);

	int cnt[10] = { 0 };

	while ( n > 0 ) {
		cnt[n%10]++;
		n /= 10;
	}

	printf("Digit:\t\t");
	for( int i = 0; i < 10; i++ ) {
		printf(" %d", i);
	}
	printf("\n");

	printf("Occurrences:\t");
	for ( int i = 0; i < 10; i++ ) {
		printf(" %d", cnt[i]);
	}
	printf("\n");


	return 0;
}
