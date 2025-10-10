#include <stdio.h>

int main (void) {

	int a = 077;			// 7*8^1 + 7*8^0
	int b = 0x77, c = 0XABC;	// 7*16^1 + 7*16^0, 10*16^2 + 11*16^1 + 12*16^0

	printf("%d %d %d\n", a, b, c);

	return 0;

}
