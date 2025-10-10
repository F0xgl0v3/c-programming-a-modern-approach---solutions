#include <stdio.h>
#define p printf
#define s scanf

int main ( void ) {
	float commissionA, commissionB, value, shares, price;

//	p("Enter value of trade: ");
	p("Enter the number of shares and the price per share ( shares price/s ): ");
	s("%f %f", &shares, &price);

	value = price * shares;

	if ( value < 2500.0f )
		commissionA = 30.00f + .017f * value; 
	else if ( value < 6250.00f )
		commissionA= 56.00f + .0066f * value;
	else if ( value < 20000.00f )
		 commissionA= 76.00f + .0034f * value;
	else if ( value < 50000.00f ) 
		commissionA = 100.00f + .0022f * value;
	else if ( value < 500000.00f ) 
		 commissionA = 155.00f + .0011f * value;
	else 
		 commissionA = 255.00f + .0009f * value;

	if ( commissionA < 39.00f )
		commissionA = 39.00f;
	


	if ( shares < 2000 ) commissionB = 33.0f + 0.03f * shares;
	else commissionB = 33.0f + 0.02f * shares;	


	p("Commission broker A: $%.2f\n", commissionA); 
	p("Commission broker B: $%.2f\n", commissionB);

	return 0;
}
