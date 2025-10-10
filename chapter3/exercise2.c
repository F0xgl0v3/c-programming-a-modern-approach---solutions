#include <stdio.h>

int main(void) {
	double a = 12345.67890;

	printf("%-8.1e\n", a);
	printf("%10.6e\n", a);
	printf("%-8.3f\n", a);
	printf("%6.0f\n", a);

	return 0;
}	
