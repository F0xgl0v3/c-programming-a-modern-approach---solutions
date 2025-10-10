#include <stdio.h>
#define p printf 
#define s scanf

int main ( void ) {
	int wind = 0;

	p("Enter windspeed in knots: ");
	s("%d", &wind);

	if ( wind < 1 ) p("Calm\n");
	else if ( wind < 4 ) p("Light air\n");
	else if ( wind < 28 ) p("Breeze\n");
	else if ( wind < 48 ) p("Gale\n");
	else if ( wind < 64 ) p("Storm\n");
        else p("Hurricane\n");

	return 0;
}	
