#include <stdio.h>

int main ( void ) {
   	int i = 0;

	i = 10; 
	while ( i >= 1 ) {
		i /= 2;
		printf (" %d\n", i++);
	}	
	return 0;
}
