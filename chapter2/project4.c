#include <stdio.h>

double pot(int a_, int b_);

int main () {
	int x;
	double y;
	printf("Please enter a x value: ");
	scanf("%d", &x);
	y = (3 * (pot(x, 5)) + 2 * (pot(x, 4)) - 5 * (pot(x, 3)) - (pot(x, 2)) + 7 * x -6);
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.0f\n", y);
	return 0;
}

double pot( int a_, int b_) {
	int a;
	int b;

	a = a_;
	b = b_;
	
	if( b == 0 ) {
			return 1;
	}
	else if( b == 1 ) {
		return a;
	}
	else {
		return a * pot(a_, b_-1);
	}
}
