#include <stdio.h>

int main ( void ) {
	int sum = 0;

	for ( int i = 0; i < 10; i++ ) {
		if ( i % 2 ) continue;
		sum += i;
	}

	printf("%5d\n", sum);

	printf(" this porgramm sums the odd numbers from 0 to 10.\n result should be 25 not 20 tho wtf\n 1 + 3 = 4, 4 + 5 = 9, 9 + 7 = 16, 16 + 9 = 25, 1 + 3 + 5 + 7 + 9 = 25\n");
	printf(" what is this? lets say we put i into the if cond, we get 1 wich is true then we add it, then we put 2 into if cond which gives 0 then 3 -> 1 and so on.\n");
	printf(" it summs the even numbers, im stupid lol..., so it is 2 + 4 + 6 + 8 = 20, ofc -_o\n");

	return 0;
}
