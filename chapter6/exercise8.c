#include <stdio.h>

// this shit will loop for ever, because /= will never negative min is 0, then, withing the loop, it is incremented by 1 so it will hit the condition with 1, the condition will evaluate to true and the loop will loop 4ever.

int main ( void ) {

	int i = 0;

	for ( i = 10; i >= 1; i /= 2 ) printf(" %d\n", i++);
	return 0;
}
