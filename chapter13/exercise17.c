#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Write the following function:

bool test_extension( const char *file_name, const char *extension );
void upit( char *s );

// file_name points to a sting contianing a filename. The fucntion should return true if the file's extension matchesthe string pointed to by extension, ignoring the case of letters. 
// For example, the call test_extension( "memo.txt", "TXT" ) would return true. Incorporate the "search for the end of a sting" idiom into your function.Hint: Use the touppoer function to convert characters to upper-case
// befor comparing them.

int main( int argc, char *argv[] ) {

	printf( "%d\n", test_extension( argv[1], argv[2] ) );	

	return 0;
}

bool test_extension( const char *fn, const char *ext ) {
	char f2[50];
	char e2[50];
	char *f3 = &f2[0];
	strcpy( f2, fn );
	strcpy( e2, ext );
	upit( f2 );
	upit( e2 );
	while( *f3 != '.' ) f3++;
	if( strcmp( ++f3, e2 ) == 0 ) return true;
	return false;
}

void upit( char *s ) {	
	if( *s == '\0' ) 
		return;	

	if( isalpha( *s ) ) 
		*s = toupper( *s );
	
	upit( ++s );

	return;
}

