#include <stdio.h>
#define p printf
#define s scanf
#define size (sizeof(a) / sizeof(a[0]))

int main ( void ) {

	int i = 0, n = 0;

	p("How many numbers do you want to reverse? ");
	s("%d", &n);

	int a[n];

	p("Enter %d numbers: ", size);
	while ( i < size ) {
	       	s("%d", &a[i]);
		i++;
	}

	p("In reverse order: ");
	while ( i > 0 ) {
		i--;
		p(" %d", a[i]);
	}
	p("\n");

	return 0;
}
