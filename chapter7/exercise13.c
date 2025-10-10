
#include <stdio.h>

int main ( void ) {
	char c = '\1';
	short s = 2; 
	int i = -3; 
	long m = 5; 
	float f = 6.5f; 
	double d = 7.5;

	printf("%d = c * i\n", c*i); 
	printf("%ld = s + m\n", s+m); 
	printf("%f = f / c\n", f/c); 
	printf("%lf = d / s\n", d/s);
	printf("%lf = f - d\n", f-d);
	printf("%d = (int) f\n", (int)f);

	printf("types are as follows:\n int\n long\n float\n double\n double\n int\n");

	return 0; 
}
