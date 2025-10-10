#include <stdio.h>
#define EPSILON 0.1

int main(void){
	int num, d, m, y;
	float price;
	char date[11];

	printf("Enter item number: ");
	scanf("%d", &num);
again:
	printf("Enter unit price(max 9999.99): ");
	scanf("%f", &price);
	if(price > 9999.99 + EPSILON) {
		printf("try again...\n");
		goto again;
	}
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
//	date<<d<<"/"<<"/"<<m<<"/"<<y;				// the var date is appened by the values of d m and y seperated by / chars.	 <- this would only be a thing if i was using c++ which, for now, im not using maybe i comeback later...
	sprintf(date, "%.2d/%.2d/%.4d", d, m, y);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%8.2f\t%s\n", num, price, date);	// %c is supposed to print out a char var.       <- seems like using %c would only print a character to print a string i would haveto use %s.
	return 0;
}
