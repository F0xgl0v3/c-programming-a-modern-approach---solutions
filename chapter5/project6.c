#include <stdio.h>
#define p printf 
#define s scanf 

int main ( void ) {
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, sum1, sum2, cd;

	p("Enter a 12 digit UPC: ");
	s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

	sum1 = d1 + d3 + d5 + d7 + d9 + d11;
	sum2 = d2 + d4 + d6 + d8 + d10;
   	cd = (10 - ((sum1 * 3 + sum2) % 10)) %10;
	
	if (cd == d12) p("VALID\n");
	else p("NOT VALID\n");

	return 0;
}
