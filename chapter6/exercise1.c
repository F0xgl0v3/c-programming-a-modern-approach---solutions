#include <stdio.h>

int main (void){
	int i = 1;
	int n = 0;
	printf("expected output: the row of 2^n\n");
	scanf("%d", &n);
	while ( i <= 128 ) printf("%d\n", i*=2);
}	
