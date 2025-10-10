#include <stdio.h> 

// the minimal value for int overflow is 46341 in the case of this programm.
// assuming we unse int wich is of size 2^32
// the overflow value can be calculated by (int)sqrt(2^31)+1 because we are using singed ints if we are use int 
// the overflow value would be (int)sqrt(2^32)+1 in case we would use unsigned int
// in case of short we would be talkling about (int)sqrt(2^15)+1 respectivly (int)sqrt(2^16)+1 for unsigned 

int main ( void ) {

	int odd = 3; 
	int n = 0; 
	int s = 1;

	printf("Enter depth: ");
	scanf("%d", &n); 

	if ( n > 1 ) printf(" 1\n");
	for ( int i = 1; i < n; i++ ) {
		printf(" %d\n", s += odd); 
		odd += 2; 
	}
	return 0; 
}
