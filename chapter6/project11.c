#include <stdio.h>

int main ( void ) {
	int n=0; 
	double e=1.0;
	double fac();

	printf("Enter depth: ");
	scanf("%d", &n);

	while ( 0 < n ) e += 1/fac(n--);

	printf("%f\n", e);

	return 0;
}

double fac ( int a ) {

	double b=1;
	while (	a > 0 )	b *= a--;
	return b;
}
