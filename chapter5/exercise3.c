#include <stdio.h>
#define p printf

int main (void) {

	int i, j, k;

	i = 3; j = 4; k = 5;
	p("%d ", i < j || ++j < k);
	p("%d %d %d\n", i , j, k);
	p("1 3 4 5 assumed\n");				//	p("1 3 5 5 assumed\n");

	i = 7; j=8;k=9;
	p("%d ", i-7 && j++ < k);
	p("%d %d %d\n", i, j, k);
	p("0 7 8 9 assumed\n");				//	p("0 7 9 9 assumed\n");

	i=7;j=8;k=9;
	p("%d ", (i=j) || (j=k));
	p("%d %d %d\n", i, j, k);
	p("1 8 8 9 assumed\n");

	i=1;j=1;k=1;
	p("%d ", ++i || ++j && ++k);
	p("%d %d %d\n", i, j, k);
	p("1 2 1 1 assumed\n");				//	p("1 2 2 2 assumed\n");

	return 0;
}
