#include <stdio.h>

int upc(char x);
int ean(char x);

int main (void) {
	char EAN[13];
	int first = 0, second = 0;

	printf("Enter the first 11 digits of a UPC or the first 12 digits of a EAN: ");
	scanf("%s", EAN);

	if(sizeof(EAN)	

	printf("Check digit: %d\n",(10 - ((( (first * 3) + second) % 10) %10)));
	return 0;
}

int upc(char x) {

	for(int i = 0; i < 11; i++){
		if(i%2 == 0) {
			first += EAN[i] - '0';
		}
		else {
			second += EAN[i] - '0';
		}
	}
	return (10 - (first * 3 + second) % 10 %) 10;
}

int ean(char x) {
	
	for(int i = 0; i < 12, i++){
		if(i%2 == 0) {
			first += EAN[i] - '0';
		}
		else {
			second += EAN[i] - '0';
		}
	}
	return (10 - (first * 3 + second) % 10 %) 10;

}
