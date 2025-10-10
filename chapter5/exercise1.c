#include <stdio.h>
#define p printf

int main (void) {
	p("test\n");

	int i,j,k;

	i = 2; j = 3;
	k = i * j == 6;
	p("%d\n", k);
	p("1 assumed\n");

	i = 5; j = 10; k = 1;
	p("%d\n", k > i < j);
	p("1 assumed\n");		// wrong because left assosiativ p("0 assumed\n");

	i = 3; j = 2; k = 1;
	p("%d\n", i < j == j < k);
	p("1 assumed\n"); 

	i = 3; j = 4; k = 5;
	p("%d\n", i % j + i < k);
	p("0 assumed\n");	// wrong because (i%j + i) < k precedence  p("4 assumed\n");

	return 0;
}
