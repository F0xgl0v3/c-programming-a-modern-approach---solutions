#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define p printf 
#define s scanf 
#define mm minutes_after_midnight

int i = 0;

typedef struct flight_timings { 
	int dep;	// departure time 
	int arr;	// time of arrival
} flight_timings;

flight_timings ft[] = {
	{ (8*60), (10*60+16) },
	{ (9*60+43), (11*60+52) },
	{ (11*60+19), (13*60+31) },
	{ (12*60+47), (15*60) },
	{ (14*60), (16*60+8) },
	{ (15*60+45), (17*60+55) },
	{ (19*60), (21*60+20) },
	{ (21*60), (23*60+58) }
};

char *contimecode( int mm, char *buffer );
void find_closest_flight( int desired_time, int *departure_time, int *arrival_time );

int main ( void ) {
	
	char *buffer = malloc( sizeof( char ) * 20 );
	int h, m, minutes_after_midnight = 0;
	int departure_time, arrival_time;
	int desired_time;
	
	p("Enter a 24-hour time: ");
	s("%d:%d", &h, &m);
	minutes_after_midnight = h * 60 + m;

	/*
	while ( minutes_after_midnight > ft[i].dep ) i++;
	p("Closest departure time is %s, ", contimecode( ft[i].dep, buffer ) );
	p("arriging at %s\n", contimecode( ft[i].arr, buffer ) );
	*/

	find_closest_flight( minutes_after_midnight, &departure_time, &arrival_time );
	p("Closest departure time is %s, ", contimecode( departure_time, buffer ) );
	p("arriging at %s\n", contimecode( arrival_time, buffer ) );
	// p("Closest departure time is %s, arriving at %s\n", departure_time, arrival_time );

	free( buffer );

	return 0;
}

void find_closest_flight( int desired_time, int *departure_time, int *arrival_time ) {

	while ( desired_time > ft[i].dep ) i++;
	if ( i > 0 ) {
	if ( desired_time - ft[i-1].dep > ft[i].dep - desired_time ) {
		*departure_time = ft[i].dep;
		*arrival_time = ft[i].arr;
	}
	else {
		*departure_time = ft[i-1].dep;
		*arrival_time = ft[i-1].arr;
	}
	}
	else {
		*departure_time = ft[i].dep;
		*arrival_time = ft[i].arr;
	}

	return;

	// departure times in minutes after midnight 
	/*
	( 8 * 60 ) 		// 8 a.m.
	( 9 * 60 + 43 )		// 9:43 a.m.
	( 11 * 60 + 19 ) 	// 11:19 a.m.
	( 12 * 60 + 47 ) 	// 12:47 p.m.
	( 14 * 60 ) 		// 2 p.m.
	( 15 * 60 + 45 )	// 3:45 p.m.
	( 19 * 60 ) 		// 7 p.m.
	( 21 * 60 ) 		// 9 p.m.
	*/

}

char *contimecode( int mm, char *buffer ) {

	char *period = "a.m.";
	int h = mm / 60;
	int m = mm % 60;

	if ( h > 12 ) { 
		h %= 12;
		period = "p.m.";
	}

	sprintf( buffer, "%d:%.2d %s", h, m, period );
	return buffer;

}
