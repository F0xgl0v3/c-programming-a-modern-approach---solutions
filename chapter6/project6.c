#include <stdio.h>

int main ( void ) {
	int n = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	for ( int i = 0; i*i < n; i += 2 ) printf("%5d\n", i*i);
	return 0;
}
