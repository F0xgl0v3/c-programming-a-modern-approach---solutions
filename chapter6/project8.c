#include <stdio.h>

int main ( void ) {
	int d = 0, md = 0;

	printf("Enter number of days in month: ");
	scanf("%d", &md);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &d); 

	printf("\n\tSun\tMon\tTue\tWen\tThu\tFri\tSat\n");

	for ( int i = 1; i < d; i++ ) printf("\t");

	
	for ( int i = 1; i <= md; i++ ) {
		printf("\t%d", i);
		if ( (i-1+d) % 7 == 0 ) printf("\n");		
	}
  	
	printf("\n");
	return 0;
}

