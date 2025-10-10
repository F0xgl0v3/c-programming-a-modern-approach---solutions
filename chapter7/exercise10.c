#include <stdio.h>

int main ( void ) {
	int i = 1;
	long j = 2;
	unsigned int k = 3;

	i + ( int  ) j * k; 

	printf("the value of the expression will be of type unsigned int because it is defined that way in c99\n");

	return 0; 
}
