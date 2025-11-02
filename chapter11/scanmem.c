#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>

// it seems like this is forbidden. i get a segfault... i was pointed to LiME, maybe i will have a look at that. 
int *p;

int main( void ) {

	printf( "%x\n", &p );

	p = 0;
	for ( int i = 0; i < 65536; i++ ) {
		for ( int j = 0; j < 10; j++ ) {
			p = (int*) i;
			printf( "%x\n", *p );
		}
	}

	return 0;
}
