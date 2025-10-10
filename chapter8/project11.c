#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( void ) {

	int i = 0;
	char n = 0;
	char num[20];

	printf("Enter a phone number: ");
	
	
	while ( n != '\n' ) {
	n = getchar();	

	switch ( n ) {
	
	case( 'A' ) : case ( 'B' ) : case ( 'C' ) : 
		num[i] = '2';
		break;
	case( 'D' ) : case ( 'E' ) : case ( 'F' ) :
		num[i] = '3'; 
		break; 
	case( 'G' ) : case ( 'H' ) : case ( 'I' ) : 
		num[i] = '4'; 
		break; 
	case( 'J' ) : case ( 'K' ) : case ( 'L' ) : 
		num[i] = '5'; 
		break; 
	case( 'M' ) : case ( 'N' ) : case ( 'O' ) :
		num[i] = '6'; 
		break; 
	case( 'P' ) : case ( 'R' ) : case ( 'S' ) :
		num[i] = '7';
		break;
	case( 'T' ) : case ( 'U' ) : case ( 'V' ) :
		num[i] = '8';
		break;
	case( 'W' ) : case ( 'X' ) : case ( 'Z' ) : 
		num[i] = '9';
		break;
	default : 
		num[i] = n;
		break;
	}
	
	i++;

	}

	printf("%s\n", num);
	return 0;

}
