#include <stdio.h>
#define T "Balance remanining after "

float balance(float loan_, float irate_, float mpay_, int times_);

int main() {
	float loan;
	float irate;
	float mpay;
	int npay;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &irate);
	printf("Enter monthly payment: ");
	scanf("%f", &mpay);
	irate = irate / 12 / 100 + 1;
	printf("Enter number of payments: ");
	scanf("%d", &npay);
	
	for ( int i = 0; i < npay; i++ ) {
	printf("Balance remaining after %3d payments: %.2f\n", i+1, (loan-mpay)*irate);
	loan = ( loan-mpay ) * irate;
	}

	//printf("Balance remaining after first payment: %.2f\nBalance remaining after second payment: %.2f\nBalance remaining after third payment: %.2f\n", (loan-mpay)*irate, (((loan-mpay)*irate)-mpay)*irate, (((loan-mpay)*irate-mpay)*irate-mpay)*irate);
	//printf("Balance remaining after first payment: %.2f\nBalance remainging after second payment: %.2f\nBalance remaining after third payment: %.2f\n", balance(loan, irate, mpay, 1), balance(loan, irate, mpay, 2), balance(loan, irate, mpay, 3));
	return 0;
}

float balance(float loan_, float irate_, float mpay_, int times_) {
	float loan = loan_;
	float irate = irate_;
	float mpay = mpay_;
	float times = times_;

	if (times > 0){
		loan = (balance(loan, irate, mpay, times-1)-mpay)*irate;
		return loan;
	}
	else {
		return loan;
	}
}
