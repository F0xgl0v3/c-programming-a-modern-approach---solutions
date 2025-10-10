#include <stdio.h>
#define p printf
#define s scanf

int main ( void ) {
	int n = 0, m = 0, r = 0, num = 0, den = 0;
	
	p("Enter a fraction: ");
	s("%d / %d", &n, &m);
	num = n;
	den = m;

	while ( n != 0 ) {
		r = m % n;
		m = n;
		n = r;
	}

	num /= m;
	den /= m;

	p("In lowest terms: %d/%d\n", num, den);
}
