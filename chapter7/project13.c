#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ( void ) {

	int wnum = 0;
	int cnum = 0;
	char c = 0;
	double avrg = 0.0f;

	printf("Enter a sentence : ");

	while( c != '\n' ) {

		cnum = 0;
		c = getchar();

		while( c != ' ' && c != '\n' ) {

			cnum++;
			c = getchar();

		}

		avrg *= wnum++;
		avrg += cnum;
		avrg /= wnum;

	}

	printf("%.2lf\n", avrg);
	return 0;
}
