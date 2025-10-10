#include <stdio.h>
#define p printf

int main ( void ) {

	int n = 0;

	p("size of int : %d\n", (int) sizeof(int));
	p("size of short : %d\n", (int) sizeof(short));
	p("size of long : %d\n", (int) sizeof(long));
	p("size of float : %d\n", (int) sizeof(float));
	p("size of double : %d\n", (int) sizeof(double));
	p("size of long double : %d\n", (int) sizeof(long double));

	return 0;

}	
