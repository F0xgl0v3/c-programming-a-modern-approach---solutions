#include <stdio.h>
#define p printf

int main (void) {
	int i,j,k;
	i = 10; j = 5;

	p("%d\n", !i < j);
	p("1 assumed\n");

	i = 2; j = 1;
	p("%d\n", !!i + !j);
	p("1 assumed\n");

	i = 5; j = 0; k = -5;
	p("%d\n", i && j || k);
	p("1 assumed\n");

	i = 1; j = 2; k = 3;
	p("%d\n", i < j || k);
	p("1 assumed\n");

	return 0;
}
