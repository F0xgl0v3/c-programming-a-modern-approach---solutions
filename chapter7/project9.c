#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ( void ) {


	int h, m;
	char postfix;

	printf("Enter a 12-hour clock time : ");
	scanf("%d : %d %c", &h, &m, &postfix);
	postfix = toupper( postfix );
	
	if( postfix == 'P' && h < 12 ) {
		h += 12;
	}

	if ( h == 12 && postfix == 'A') h = 0;

	printf("%d:%d\n", h, m);
	printf("%x:%x\n", h, m);

	return 0;
	
}
