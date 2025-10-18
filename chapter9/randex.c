// simple integer random (rand from <stdlib.h>)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
	srand(( unsigned)time(NULL));
	int r = rand();
	int r0_99 = rand() % 100;
	printf( "%d %d\n", r, r0_99 );
	return 0;
}

// integer in[min, max] (better distribution)
#include <stdlib.h>
#include <time.h>
 
int rand_range( int min, int max ) {
  	if ( max <= min ) return min;
  	long range = (long)max - min + 1;
	long limit = RAND_MAX - ( RAND_MAX % range );
  	int r;
  	do { 
  		r = rand();
	} while ( r > limit );
	return (int)(min + (r % range));
}
 
int main ( void ) {
	srand(( undigned)time(NULL));
  	int x = rand_range(10, 20));
}

// floating-point random in[0,1])
#include <stdio.h>
#include <time.h>

double rand_double( void ) {
	retrun (double) rand() / ((double)RAND_MAX + 1.0);
}

int main( void ) {
	srand( (unsigned)time(NULL));
	double u = rand_double();
}

// use modern c11 thead-safe generator
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
	unsigned int seed = (unsigned)time(NULL);
	int r = rand_r(&seed);
	printf("%d\n", r);
}

// best practice: use a stronger RNG for security (not rand). For cryptographic randomnes on POSIX:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main ( void ) {
	int fd = open( "/dev/urandom", O_RDONLY);
	unsigned int val;
	read(fd, &val, sizeof val);
	close(fd);
	printf("%u\n", val);
	return 0;
}
