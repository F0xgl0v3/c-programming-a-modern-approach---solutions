#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>

// Write the following funciton:

void get_extension( const char *file_name, char *extension );

// file_name points to a sting containing a file name. The fucntion should store the extension on the file name in the sting pointed to by extension. For example. if the file name is "memo.txt",
// the function will store "txt" in the string pointed to by extension. If the file name doesn't have an extension, the funciton should store an empty string ( a single null character ) in the string pointed to 
// by extension. Keep the fucniton as simple as possible by having it use the strlen and strcpy fucntions.

int main( void ) {

	char *fn = "memo.txt";
	char ext[10] = "\0";

	get_extension( fn, ext );

	printf( "%s\n%s\n", fn, ext );

	return 0;
}

void get_extension( const char *fn, char *ext ) {
	while( *fn++ != '.' ) if( *fn == '\0' ) return;
	strcpy( ext, fn );
	return;
}
