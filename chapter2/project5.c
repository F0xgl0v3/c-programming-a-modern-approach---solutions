#include <stdio.h>

int main() {
	int usd;
	int amount;
	printf("Enter an amount in U.S.D: ");
	scanf("%d", &usd);
	amount = usd/20;
	usd = usd%20;
	printf("$20 bills: %d\n", amount);
	amount = usd/10;
	usd = usd%10;
	printf("$10 bills: %d\n", amount);
	amount = usd/5;
	usd = usd%5;
	printf("$5 bills: %d\n", amount);
	amount = usd/1;
	printf("$1 bills: %d\n", amount);
}
