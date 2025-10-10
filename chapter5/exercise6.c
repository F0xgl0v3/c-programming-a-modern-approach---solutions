#include <stdio.h>
#define p printf
#define s scanf

int main (void) {
	int n;
	p("The following if statement is legal: \nif (n == 1-10) {\nprintf(\"n is between 1 and 10\\n\");\n}\n");
	s("%d", &n);
	p("But what it does is once again not what is stated in the print. instead it checks if the value of n is equal to -9 ( n == (1-10) )\nHere is proof: %d\n", (n == 1-10));
	return 0;
}
