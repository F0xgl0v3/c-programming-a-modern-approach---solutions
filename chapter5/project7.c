#include <stdio.h>
#define p printf 
#define s scanf 

int main ( void ) {
	int a, b, c, d;
	p("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if ( a > b && a > c && a > d ) p("%d is the highest number\n", a);
	else if ( b > c && b > d ) p("%d is he highest number\n", b);
	else if ( c > d ) p("%d is the highest number\n", c);
	else p("%d is the highest number\n", d);

	return 0;
}
