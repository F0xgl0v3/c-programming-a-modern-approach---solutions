#include <stdio.h>

int main (void) {
	int i, j;

	i = 6; 
	j = i += i;
	printf("%d %d\n", i, j); // assumed : 12 12

	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d\n", i, j); // assumed : 3 4
	
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j); // assumed : 2 8

	i = 2; j = 8; 
	j = (i = 6) + (j = 3);
	printf("%d %d\n", i, j); // assumed : 6 9

	return 0;
}
