#include <stdio.h>

int gcd ( int n, int m ) {
	int r = 0;
	while ( n != 0 ) {
		
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main ( void ) {
	int n = 0, m = 0;

	printf("Enter two number: ");
	scanf("%d %d", &n, &m);
	m = gcd( n, m );
	printf("GCD: %d\n", m);
	return 0;
}
