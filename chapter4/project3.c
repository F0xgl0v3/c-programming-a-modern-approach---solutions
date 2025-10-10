#include <stdio.h>

int main (void) {
	int octo = 0;
	int deco;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &deco);

	octo += deco % 8;
	deco /= 8;
	octo += (deco % 8 * 10);
	deco /= 8;
	octo += (deco % 8 * 100);
	deco /= 8;
	octo += (deco % 8 * 1000);
	deco /= 8;
	octo += (deco % 8 * 10000);

	printf("In octal, your number is: %.5d\n", octo);
	return 0;
}
