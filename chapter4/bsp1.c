#include <stdio.h>
#include <string.h>

int main (void) {

	int type, manufacturer, product;

	printf("Enter the first (single) digit: ");
	scanf("%d", &type);
	printf("Enter first group of five digits: ");
	scanf("%d", &manufacturer);
	printf("Enter the second group of five digits: ");
	scanf("%d", &product);

	char man[6], prod[6], num[12];

	sprintf(man, "%5d", manufacturer);
	sprintf(prod, "%5d", product);

//	printf("%d %s %s\n", type, man, prod);

	sprintf(num, "%d%s%s", type, man, prod);
	
	int fsum=0,ssum=0;

	for(int i = 0; i < strlen(num); i++) {
		if(i%2 == 0) { fsum += num[i] - '0'; }
		else { ssum += num[i] - '0'; }
	}

	printf("%d, %d\n", fsum, ssum);
	fsum *= 3;
	fsum += ssum;
	fsum = (fsum-1) % 10;
	fsum = 9 - fsum;
	//fsum %= 10;
	//fsum = 10 - fsum; 	this wouldnt work because if the remainder of fsum%10 is 0 the check digit wich is supposed to be 0 i this case, will be calculated as 10
	printf("Check digit: %d\n", fsum);

	return 0;
}

