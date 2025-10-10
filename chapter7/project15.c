#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define p printf

int main ( void ) {
	
	int n = 0;
	p("Enter a positive integer: ");
	scanf("%d", &n);

	// a) it is 7, that is bcs short int upper limit is 2^15 = 32767 and fac 7 is 5040 => 8 * 5040 = 40320 which breaks the limit and causes overflow.
	
	/*
	short fac = 1;
	*/

	// b) it

	
	long fac = 1;

	// c) it is 
	
	/*
	long long fac = 1;
	*/
		
	while ( n > 0 ) fac *= n--;

	printf("%ld\n", fac);
	
	// printf("%.2lf\n", fac);

	return 0;
}
