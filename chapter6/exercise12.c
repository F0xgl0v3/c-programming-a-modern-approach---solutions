#include <stdio.h>

int main ( void ) {
	int d = 0, n = 0;

	printf(" ");
	scanf("%d", &n);
	for ( d = 2; d*d < n; d++ ) 
		if ( n % d == 0 )
			break;

	if ( d*d < n ) printf(" no prime\n");
	else printf(" is prime\n");
	return 0;
}
