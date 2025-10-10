#include <stdio.h>

int main(void) {
	char EAN[13];
	int sum1=0, sum2=0, check=0;

	printf("Enter the first 12 digits of an EAN: :");
	scanf("%12s", EAN);
	
	for(int i = 0; i < 12; i++) {
		
		if(i%2 == 0) {
			sum2 += (EAN[i] - '0');
		}
		else {
			sum1 += (EAN[i] - '0');
		}	
	}

	printf("%d %d\n", sum1, sum2);

	check = (10 - (((sum1*3) + sum2) % 10)) % 10 ;

	printf("Check digit : %d\n", check);
	return 0;
}
