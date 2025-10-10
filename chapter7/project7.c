#include <stdio.h>

int main(void){
	int num1, denom1, num2, denom2, result_num, result_denom;
	char op = 0;

	printf("Enter two fractions, seperated by an operator ( a / b (op) c / d ) spaces are irrelevant: ");
	scanf("%d / %d %c %d / %d", &num1, &denom1, &op, &num2, &denom2);


	if ( op == '+' ) {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	}
	else if ( op == '/' ) {
		result_num = num1 / num2 ;
		result_denom = denom1 / denom2;
	}
	else if ( op == '*' ) {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	}
	else if ( op == '-' ) {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
	}

	printf("%d/%d\n", result_num, result_denom);

	return 0;
}
