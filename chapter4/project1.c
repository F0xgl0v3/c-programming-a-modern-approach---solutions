#include <stdio.h>

int main (void) {
	int i;
	printf("Enter a two-digit number: ");
	scanf("%d", &i);
	printf("The reversal is: %d\n", (i/10) + (i%10)*10);
	return 0;
}
