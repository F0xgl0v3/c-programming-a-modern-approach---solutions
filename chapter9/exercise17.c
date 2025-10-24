#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

uint64_t cust_pow( uint64_t base, uint64_t exponent );
uint64_t fact( uint64_t n );

int main ( void ) {
	uint64_t result = 0;
	char decider;
	int fd = open ( "/dev/urandom", O_RDONLY );
	uint64_t base, exponent;

cupcake:
	printf( "Enter numbers to go with or go with a random? [r/e]: " );
	scanf( "%c", &decider );
	switch( decider ) {
		default: 
			goto cupcake;
			break;
		case ( 'r' ):
			read( fd, &base, sizeof base );
			read( fd, &exponent, sizeof( uint64_t ) );
			base %= 10;
			exponent %= 10;
			printf( "base: %lld\nexponent: %lld\n", base, exponent );
			break;
		case ( 'e' ):
			printf( "Keep in mind the upperlimit of uint64_t" );
			printf( "Enter a value for base please: " );
			scanf( "%lld", &base );
			printf( "Enter a value for the exponent please: " );
			scanf( "%lld", &exponent );
			break;
	}
			
	result = cust_pow( base, exponent );
	printf( "base^exponent: %lld\n", result );
	result = fact( base );
	printf( "well I overlooked that in this exercise we are only supposed to rewrite the fact function but I am not going to delete my code so here we are. This was fun anyways.\n" );
	printf( "the factorial of the base is: %lld\n", result );
	return 0;
}

uint64_t cust_pow( uint64_t x, uint64_t n ) {
	uint64_t res=1;
	for( int i = 0; i < n; i++ ) {
		res *= x;
	}
	return res;
}

uint64_t fact( uint64_t n ) {
	uint64_t res=1;
	while( n > 0 ) res *= n--;
	return res;
}
