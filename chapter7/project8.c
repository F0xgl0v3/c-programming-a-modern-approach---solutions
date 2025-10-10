#include <stdio.h>
#define p printf 
#define s scanf 
#define mm minutes_after_midnight
#include <ctype.h>

int main ( void ) {
	
	int h, m, minutes_after_midnight = 0;
	char mod = 0;
	
	p("Enter a 24-hour of 12-hour time : ");
	s("%d:%d%c", &h, &m, &mod);
	m = toupper(m);
	
	if( m == 'P' ) h += 12;

	minutes_after_midnight = ( 24 - h ) * 60 + m;

	if ( mm < 8 * 60 ) p("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	else if ( mm < 9 * 60 + 43 ) p("Closest departure time is 9:43 a.m., arriving at 11:52 p.m.\n");
	else if ( mm < 11 * 60 + 19 ) p("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	else if ( mm < 12 * 60 + 47 ) p("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
       	else if ( mm < 14 * 60 ) p("Closest departure time is 2:00 p.m., arring at 4:08 p.m.\n");
	else if ( mm < 15 * 60 + 45 ) p("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	else if ( mm < 19 * 60 ) p("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	else if ( mm < 21 * 60 ) p("Closest departure time is 9:45 p.m., arriging at 11:58 p.m.\n");

	return 0;
}
