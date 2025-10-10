#include <stdio.h>
#define p printf 
#define s scanf 

int main (void) {
	int score;
	s("%d", &score);

	if (score >= 90)
		p("A\n");
	else if (score >= 80)
		p("B\n");
	else if (score >= 70)
		p("C\n");
	else if (score >= 60)
		p("D\n");
	else 
		p("F\n");

	if (score < 60)
		p("F\n");
	else if (score < 70)
		p("D\n");
	else if (score < 80)
		p("C\n");
	else if (score < 90)
		p("B\n");
	else 
		p("A\n");

	return 0;
}
