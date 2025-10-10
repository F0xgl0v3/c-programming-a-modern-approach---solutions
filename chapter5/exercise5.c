#include <stdio.h>
#define p printf
#define s scanf

int main (void) {
	int n; 
	p("Enter a value for n please: ");
	s("%d", &n);
	p("The follong statement is legal:\nif ( n >= 1 <= 10)\n{\nprintf(\"n lies between 1 and 10\\n\");\n}\n");
	p("What it does is the following: it checks if n >= 1 which is 0 or 1, then it checks if 0 or 1 are <=10 which is basicly always true.\nThe conclusing in the printf statement is wrong tho.\n");
	p("Here is the proof: %d\n", (n >= 1 <= 10));
	p("Whats important here is that relational operators are left associative and that the result is either 1 or 0. n is not compared against 1 first and the compared against 10!\n");

	return 0;
}
