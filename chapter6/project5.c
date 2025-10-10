#include <stdio.h>

int main ( void ) {
	int num = 0, res = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while ( num > 0 ) {		
		res *= 10;
		res += num % 10;
		num /= 10;
	}

	printf("%d\n", res);
	return 0;
}	
