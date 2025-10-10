#include <stdio.h>
#define p printf
#define s scanf 

int main ( void ) {
	int d1 = 0, m1 = 0, y1 = 0, d2 = 0, m2 = 0, y2 = 0;
	int f = 1;	
	/*
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
	*/

	while ( 1 ) {
		printf("Enter a date: ( mm/dd/yy ) : ");
		scanf("%d / %d / %d", &m1, &d1, &y1);
		
		if ( f ) {
			f--;
			y2 = y1, m2 = m1, d2 = d1;
		}

		if ( d1 == 0 && m1 == 0 && y1 == 0 ) {
			goto raus;
		}

		if ( y1 < y2 ) {
			y2 = y1; 
			d2 = d1; 
			m2 = m1;
		}
		else if ( m1 < m2 ) {
			y2 = y1; 
			d2 = d1; 
			m2 = m1;
		}
		else if ( d1 < d2 ) {
			y2 = y1; 
			d2 = d1; 
			m2 = m1; 
		}

	}
raus:
	printf("%d/%d/%d is the earlies date\n", m2, d2, y2);

	return 0;
}
