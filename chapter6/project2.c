#include <stdio.h>

int main ( void ) {
	int n = 0, m = 0, r = 0;

	printf("Enter two number: ");
	scanf("%d %d", &n, &m);
	while ( n != 0 ) {
		
		r = m % n;
		m = n;
		n = r;
	}
	printf("GCD: %d\n", m);
	return 0;
}
