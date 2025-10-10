#include <stdio.h>
#define p printf 
#define s scanf 

int main ( void ) {
	int grade;
	char l;

again:
	p("Enter a numerical grade: ");
	s("%d", &grade);

	if ( grade > 100 || grade < 0 ) {
		p("EROAR\n");
		goto again;
	}
	grade = grade / 10;

	switch ( grade ) {
		case 6 : l = 'D';
			 break;
		case 7 : l = 'C';
			 break;
		case 8 : l = 'B';
			 break;
		case 9 : case 10 : l = 'A';
				   break;
		default : l = 'F';
			  break;
	}

	p("Letter grade: %c\n", l);
	return 0;
}
