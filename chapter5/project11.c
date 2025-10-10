#include <stdio.h>
#define p printf 
#define s scanf 

void printword(int x);

int main ( void ) {
	int d1, d2; 

	p("Enter a two digit number: ");
	s("%1d%1d", &d1, &d2);
	
	p("You entered the number: ");
	printword( d1 );
	p("-");
	printword( d2 );
	p(".\n");
	return 0;

}



void printword (int x) {

	switch ( x ) {
		case 0 : p("zero");
			 break;
		case 1 : p("one");
			 break;
		case 2 : p("two");
			 break;
		case 3 : p("three");
			 break;
		case 4 : p("four");
			 break;
		case 5 : p("five");
			 break;
		case 6 : p("six");
			 break;
		case 7 : p("seven");
			 break;
		case 8 : p("eight");
			 break;
		default : p("nine");
			 break;
	}
}
