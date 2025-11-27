#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Modify the read_line function in each of the following ways:
// (a) Have itskip white space before beginning to store input characters.
// (b) Have it stop reading at the first white-space character. Hint: To determine whether or not a character is white space, call the isspace function.
// (c) Have it stop reading at the first new-line character, then store the new-line character in the string.
// (d) Have it leave behind characters that it doesn't have room to store.

int read_line_a( char str[], int n );
int read_line_b( char str[], int n );
int read_line_c( char str[], int n );
int read_line_d( char str[], int n );

int main( void ) {		
	int len = 50;
	char str[len];

	read_line_a( str, len );
	printf( "%s\n", str );
	read_line_b( str, len );
	printf( "%s\n", str );
	read_line_c( str, len );
	printf( "%s\n", str );
	read_line_d( str, len );
	printf( "%s\n", str );

	return 0;
}

int read_line( char str[], int n ) {
	int ch, i = 0;
	while(( ch=getchar() ) != '\n' )
		if( i < n ) str[i++] = ch;
	str[i] = '\0';		
	return i;	
}

int read_line_a( char str[], int n ) {
	int ch, i = 0;

	while(( ch=getchar() ) == ' ' );
	do
	 	if( i < n ) str[i++] = ch;
	while(( ch=getchar() ) != '\n' );
	str[i] = '\0';		
	return i;	
}

int read_line_b( char str[], int n ) {
	int ch, i = 0;
	while(( ch=getchar() ) != '\n' ) {
		if( isspace( ch ) ) {
			while( ch = getchar() != '\n' );
			break;
		}
		if( i < n ) str[i++] = ch;
	}
	str[i] = '\0';		
	return i;	
}

int read_line_c( char str[], int n ) {
	int ch, i = 0;
	do {
		ch = getchar();
		if( i < n ) str[i++] = ch;
	}while( ch != '\n' );
	str[i] = '\0';		
	return i;	
}

int read_line_d( char str[], int n ) {
	int ch, i = 0;
	while(( ch=getchar() ) != '\n' )
		if( i < n ) str[i++] = ch;
	str[i] = '\0';		
	return i;	
}
