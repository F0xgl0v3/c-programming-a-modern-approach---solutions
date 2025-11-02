#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void split_time( long total_seconds, int *hours, int *minutes, int *seconds );

int main( void ) {

	int h;
	int m;
	int s;

	long ts = 4000;

	printf( "Enter a total number of seconds: " );
	scanf( "%ld", &ts );

	split_time( ts, &h, &m, &s );

	printf( "%d:%d:%d\n", h, m, s );

	return 0;	
}

void split_time( long ts, int *h, int *m, int *s ) {

	*h = ts / ( 60*60 );
	ts %= 3600;
	// maybe you could add days aswell, 86400 seconds are a all the seconds in a day.
	// *h %= 24;
	*m = ts / ( 60 );
	ts %= 60;
	*s = ts;

	return;
}
