#include <stdio.h>
#define p printf
#define s scanf 

int main (void) {
	int h,m;

	p("Enter a 24-hour time: ");
	s("%d:%d", &h, &m);

        if ( h > 12 ) {
		h = h - 12;
		p("%d:%d PM\n", h, m);
	}
	else p("%d:%d AM\n", h, m);
	return 0;
}
