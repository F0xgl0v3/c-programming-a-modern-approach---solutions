#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

int fact_og ( int n ) {
	if ( n <= 1 )
		return 1;
	else
		return n * fact_og ( n - 1 );
}

uint64_t fact ( int n ) {
	return ( n <= 1 ? 1 : ( n * fact ( n - 1 ) ) );
}

int main ( void ) {
	uint64_t n;
	int fd = open ( "/dev/urandom", O_RDONLY );
	read( fd, &n, sizeof ( uint64_t ) );
	n %= 20;
	printf( "n: %lld\n", n );
	printf( "factorial of n: %lld\n", fact( n ) );	
}
