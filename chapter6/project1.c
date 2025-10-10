#include <stdio.h>

int main ( void ) {
	float n = 0, m = 0;

	while ( 1 ) {
		
		printf(" Enter a number: ");
		scanf("%f", &n);
	       	if ( n > m ) m = n;
		
		if ( n == 0 ) break;
	}

	printf(" max: %.2f\n", m);	
	return 0;
}
