#include <stdio.h>

int main ( void ) {
	
	int n = 0, odd = 1;
	printf("Enter a number: ");
	scanf("%d", &n);

	for ( int i = 1, square = 0; i <= n; i++, odd += 2 ) {
		printf("%10d%10d\n", i, square += odd);
	}
	return 0;
}
