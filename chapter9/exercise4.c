#include <stdio.h>
#include <stdlib.h>

int doty( int month, int day, int year );

int main( void ) {
	int m, d, y;
	printf( "Enter a date ( m/d/y ): ");
	scanf( "%d / %d / %d", &m, &d, &y );
	if ( doty( m,d,y ) > 0 ) printf( "Number of day %d\n", doty( m, d, y) );	
	return 0;
}

int doty( int m, int d, int y ) {
	if ( d > 31 ) goto erroar;
 	if ( y%4==0 && m>2) d++;	
	switch ( m ) {
		case 12:
			d+=30;
		case 11: 
			d+=31;
		case 10:
			d+=30;
		case 9:
			d+=31;
		case 8:
			d+=31;
		case 7:
			d+=30;
		case 6: 
			d+=31;
		case 5:
			d+=30;
		case 4:
			d+=31;
		case 3: 
			d+=28;
		case 2: 
			d+=31;
		case 1: 
			break;
		default: 
erroar:
			printf( "please enter a valid date...\n" );
			return 0;
	}
	return d;
}
