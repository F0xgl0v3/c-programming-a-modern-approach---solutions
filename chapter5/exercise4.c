#include <stdio.h>
#define p printf

int main (void) { 
	int i, j;

	p("give int values for i and j: ");
	scanf("%d %d", &i, &j);
	
	p("i<j : -1\ni=j : 0\ni>j : 1\n");  // book solution (i>k) - (i<k);   <-  clean af i guess but i like mine aswell
	p("%d\n", i < j ? -1 : i != j );

	return 0; 
}
