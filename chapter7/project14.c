#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( void ) {

	double oldx = 0;
	double n = 0;
	double x = 1;

	printf("Enter a positive number: ");
	scanf("%lf", &n);

	while ( fabs(oldx-x) > x*0.00001 ) {
		oldx = x;
		x = ( x + n/x ) / 2;
	}	

	printf("Square root: %.4lf\n", x);
	return 0;
}
