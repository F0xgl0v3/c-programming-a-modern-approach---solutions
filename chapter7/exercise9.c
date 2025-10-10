#include <stdio.h>

int main ( void ) {
	int i = 1, j = 2; 
	char c = 'a';

	i / j + c;
	printf("the value of the expression is of type int, type promotion always promotes to the type that has the largest range of values\n");
	
	return 0;
}
