#include <stdio.h>

double fac ( int a );

int main ( void ) {
	int n=1;
	double epsilon=0.0;
	double e=1.0;

	printf("Enter epsilon: ");
	scanf("%lf", &epsilon);

	while ( epsilon < 1/fac(n) ) e += 1/fac(n++);

	printf("%lf\n", e);

	return 0;
}

double fac ( int a ) {

	double b=1;
	while (	a > 0 )	b *= a--;
	return b;
}
