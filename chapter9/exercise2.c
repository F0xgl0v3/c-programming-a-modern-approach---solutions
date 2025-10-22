#include <stdio.h>
#include <stdlib.h>

int check( int lower_limit, int tested_value, int upper_limit );

int main ( void ) {
	int x=1, y=2, z=3;
	int i=0;
	
herewego:
	if ( check(x,y,z) ) printf( "y=%d is > x=%d and < n=%d\n", y, x, z );
	else printf( "y=%d is out of bounds(x=%d, z=%d)\n", y, x, z );
	i++;	
	if ( i < 2 ) { 
		x = 2;
		goto herewego;
	}
	if ( i < 3 ) {
		x=1;
		z=2;	
		goto herewego;
	}
	if ( i < 4 ) {
		x=-5;
		z=5;
		goto herewego;
	}
	if ( i < 5 ) {
		y=-10;
		goto herewego;
	}
	if ( i < 6 ) {
		y=10;
		goto herewego;
	}
	if ( i < 7 ) {
		x = 2;
		z = 20;
		goto herewego;
	}
	if ( i < 9 ) {
		y = -1;
		goto herewego;
	}
	if ( i < 10 ) {
		y = 0;
		goto herewego;
	}
	if ( i < 11 ) {
		y = 1;
		goto herewego;
	}
	if ( i < 12 ) {
		y = 2;
		goto herewego;
	}
	if ( i < 13 ) {
		y = 19;
		goto herewego;
	}
	if ( i < 14 ) {
		y = 20;
		goto herewego;
	}
	if ( i < 15 ) {
		y = 21;
		goto herewego;
	}

	return 0;
}

int check( int x, int y, int n ) {
	return ( x>0 && y>0 ) && ( y>x?y<n:0 );
}
