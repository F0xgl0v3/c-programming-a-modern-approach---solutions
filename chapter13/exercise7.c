#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

// Suppose that str is an array of characters. Which one eof the following statements is not equivalent to the other three?

int main( void ) {
	// char str[1];
	char str[2] = "a";

//	*str = 0;		
//	str[0] = '\0';
//	strcpy( str, "" );
	strcat( str, "" );
	printf( "%s\n", str );
	// a and b are equivalent for sure, i got to figure out some how whether c or d is the odd one out.
	// i thoungt that "" wasnt eq to '\0' but it kind of has to be, else all of this would make no sens. 
	// so the question becomes, is cat or cpy the problem?
	// my guess would be that it is cat that is problematic, in theory. since what ever the value that str holds, "" should be placed after that value and in case it is not a 0 it will cat the "" right after that value.
	// yeah that must be it, i can test it by commenting the other ones out an initialize the sting like this str[2] = "a"; and then see what happens, by printing it.
	// If i am correct, the outcome should be that the programm just prints a.

	return 0;
}
