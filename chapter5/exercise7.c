#include <stdio.h>
#define p printf

int main (void) {
	int i;
	p("Enter i: ");
	scanf("%d", &i);

	p("the statement ( i >= 0 ? i : -i ) is a conditional expression, it returns the first expression after the quetionmark if the initial expression is true and the second if it is false.\nIn case you entered -17 it would return 17 or -i.\n");
	p("%d\n", i >= 0 ? i : -i);

	return 0;
}
