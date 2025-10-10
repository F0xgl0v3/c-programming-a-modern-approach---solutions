#include <stdio.h>

int main ( void ) {

	double n, sum = 0; 

	printf("This programm sums a series of numbers\n");
	printf("Enter a number ( 0 to terminate ) : ");
	scanf("%lf", &n); 

	while ( n != 0 ) {
		sum += n;
		scanf("%lf", &n); 
	}
	
	printf("sum is: %lf\n", sum);
	return 0; 

}
