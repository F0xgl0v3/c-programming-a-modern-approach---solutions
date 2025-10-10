#include <stdio.h>

int main (void) {

	printf("%d\n", 8%5);	// c89 3 c99 3	
	printf("%d\n", -8%5);	// c89 -3/2 c99 -3
	printf("%d\n", 8%-5);	// c89 3 c99 3
	printf("%d\n", -8%-5);	// c89 -3 c99 -3
	
	return 0;
}

