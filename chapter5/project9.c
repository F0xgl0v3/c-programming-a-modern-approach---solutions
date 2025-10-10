#include <stdio.h>
#define p printf
#define s scanf 

int main ( void ) {
	int d1, m1, y1, d2, m2, y2;

	p("Enter first date ( mm/dd/yy ): ");
	s("%d/%d/%d", &m1, &d1, &y1 );
	p("Enter second date ( mm/dd/yy ): ");
	s("%d/%d/%d", &m2, &d2, &y2);

	if ( y1 < y2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
	else if ( y1 > y2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
	else if ( m1 < m2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
	else if ( m1 > m2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m2, d2, y2, m1, d1, y1); 
	else if ( d1 < d2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
	else if ( d1 > d2 ) p("%d/%d/%d is earlier then %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
	else p("The dates are equal\n"); 

	return 0;
}
