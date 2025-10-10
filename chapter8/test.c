#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ( void ) {

	char* c = (char*)malloc(sizeof(char)*10);

	for( int i = 0; i < 10; i++ ) {
		
		c[i] = getchar();
		if ( i < 9 ) printf("%c, ", c[i]);

	}
	printf("%c\n", c[9]);
	printf("%d\n", 5/2);

	free(c);
	return 0;
}
