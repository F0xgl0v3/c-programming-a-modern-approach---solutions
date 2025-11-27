#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

// Write the following fucntion:

void build_index_url( const char *domain, char *index_url );

// domain points to a string containing an Internet domain, such as "knking.com". The fucntion should add "http://www." to the beginning of this string and "/index.html" to the end of the string,
// storing the result in the string pointed to by index_url. (In this example, the result will be "http://www.knking.com/index.html".) Yout may assume that index_url points to a variable that is long enought to hold the
// resulting string. Keep the funtion as simple as possible by having it use the strcat and strcpy funcitons.

int main( int argc, char *argv[] ) {
	char *d = "knking.com";
	// char *iu = malloc( sizeof( char ) * 50 );
	char iu[50];

	build_index_url( d, iu );
	printf( "%s\n%s\n", d, iu );

	// free( iu );
	return 0;
}

void build_index_url( const char *d, char *iu ) {
	strcpy( iu, "http://www." );
	strcat( iu, d );
	strcat( iu, "/index.html" );
	return;
}
