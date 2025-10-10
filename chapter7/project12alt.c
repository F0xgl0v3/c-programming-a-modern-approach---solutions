#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>



bool cop ( char c ) {
	
	return ( c == '+' || c == '-' || c == '*' || c == '/' );

}

double dop ( double a, double b, char c ) {
	
	if( c == '*' ) return a*b;
	else if ( c == '/' && b != 0 ) return a/b;
	else if ( c == '+' ) return a+b;
	else if ( c == '-' ) return a-b;

	return 0;
}

double getnum () {
	
	char n = 0;
	double ret = 0;
	double frac = 0;
	int depth = 10;

	while ( n != '\n' && !(cop(n)) ) {
		
		n = getchar();

		if ( n == '.' ) {
oben:	
			n = getchar();
			if( n != '\n' && !(cop(n)) ) {
				frac += (n - '0');
				frac /= depth;
				goto oben;
			}

			if ( n == '\n' ) return ret;
			return dop(ret + frac, getnum(), n);
		}
		else {
			ret *= 10;
			ret += (n - '0');
		}
	}

	if ( n == '\n' ) return ret;	
	return dop(ret, getnum(), n);

}


int main ( void ) {

	double value = 0;
	char n = 0, op = 0;

	printf("Enter an expression : ");

	value = getnum();

	printf("%.2lf\n", value);
       	return 0;

}	
