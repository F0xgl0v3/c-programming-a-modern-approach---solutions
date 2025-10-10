#include <stdio.h>
#define p printf
#define s scanf 

int main () {
	int num = 0;

	p("Enter a number: ");
	s("%d", &num);

	if ( num / 10 != 0 ) {
		if ( num / 100 != 0 ) {
			if ( num / 1000 != 0 ) {
				p("The number %d has 4 digits\n", num);
			}
			else {
				p("The number %d has 3 digits\n", num); 
			}
		}
		else {
			p("The number %d has 2 digits\n", num);
		}
	}
	else {
		p("The number %d has 1 digit\n", num);
	}

	return 0;
}
