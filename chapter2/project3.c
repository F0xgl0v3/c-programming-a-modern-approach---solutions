#include <stdio.h>
#define TAX_FACTOR 1.05f

int main () {
	float value;
	printf("Please enter a value in dollar-cents: ");
	scanf("%f", &value);
	printf("The value, after 5 percent taxation is: %.2f\n", value*TAX_FACTOR );
	return 0;
}
