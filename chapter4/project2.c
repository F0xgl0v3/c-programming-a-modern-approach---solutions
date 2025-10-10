#include <stdio.h>

int main (void){
	int i;

	printf("Enter a three-digit number: ");
	scanf("%d", &i);
	printf("The reversal is: %d\n", (i/100 + (i%100/10*10) + (i%10)*100));
	return 0;
}
