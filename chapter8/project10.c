#include <stdio.h>
#include <stdbool.h>
#define p printf 
#define s scanf 
#define mm minutes_after_midnight

int main ( void ) {
	
	int h, m, minutes_after_midnight = 0;
	int arr[2][8] = { { 8*60, 9*60+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60 }, { 10*60+16, 11*60+52, 13*60+31, 15*60, 16*60+8, 17*60+55, 21*60+20, 23*60+58 } }; 
	bool pm = false;
	int i = 0;

	p("Enter a 24-hour time: ");
	s("%d:%d", &h, &m);
	minutes_after_midnight = ( 24 - h ) * 60 + m;

	while ( mm < arr[i][0] ) i++;

	if ( 24 - h < 12 ) pm = true;

	printf("Closest time of departure is: %.2d:%.2d %c.%c.", arr[0][i]/60%12, arr[0][i]%60, pm ? 'p' : 'a', 'm' );
	printf(" arriving at %.2d:%.2d %c.%c.\n", arr[1][i]/60%12, arr[1][i]%60, pm ? 'p' : 'a', 'm' );

	/*
	if ( mm < 8 * 60 ) p("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	else if ( mm < 9 * 60 + 43 ) p("Closest departure time is 9:43 a.m., arriving at 11:52 p.m.\n");
	else if ( mm < 11 * 60 + 19 ) p("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	else if ( mm < 12 * 60 + 47 ) p("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
       	else if ( mm < 14 * 60 ) p("Closest departure time is 2:00 p.m., arring at 4:08 p.m.\n");
	else if ( mm < 15 * 60 + 45 ) p("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	else if ( mm < 19 * 60 ) p("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	else if ( mm < 21 * 60 ) p("Closest departure time is 9:45 p.m., arriging at 11:58 p.m.\n");
	*/

	return 0;
}
