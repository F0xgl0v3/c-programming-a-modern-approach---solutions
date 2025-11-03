#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

void split_date( int day_of_the_year, int year, int *month, int *day );

int main( void ) {
	
	int m = 1, d = 0, y;
	int doy;

	printf( "Enter number of days: " );
	scanf( " %d", &doy );
	printf( "Enter year: " );
	scanf( " %d", &y );

	split_date( doy, y, &m, &d );

	return 0;
}

void split_date( int doy, int y, int *m, int *d ) {
	
	int temp = doy;
	bool leap_year = false;

	if( y % 4 == 0 ) leap_year = true;

	if( *m == 1 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 2 && doy > 28 ) {
		if( leap_year && doy > 29 ) {
			doy -= 29;
			*m += 1;
		}
		else {
			doy -= 28;
			*m += 1;
		}	
	}
	if( *m == 3 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 4 && doy > 30 ) {
		doy -= 30;
		*m += 1;
	}
	if( *m == 5 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 6 && doy > 30 ) {
		doy -= 30;
		*m += 1;
	}
	if( *m == 7 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 8 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 9 && doy > 30 ) {
		doy -= 30;
		*m += 1;
	}
	if( *m == 10 && doy > 31 ) {
		doy -= 31;
		*m += 1;
	}
	if( *m == 11 && doy > 30 ) {
		doy -= 30;
		*m += 1;
	}
	if( *m == 12 && doy > 31 ) {
		printf( "Number of days is too large" );
		return;
	}
	*d = doy;



	printf( "The %d. day of the year %d corresponds to the date: %d/%d/%d\n", temp, y, *d, *m, y );
	return ;
}
