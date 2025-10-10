#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define nums 4
#define numr 13

int main ( void ) {

	bool inhand[nums][numr] = {false};
	int numcards, rank, suit;
	const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};
	const char suit_code[] = {'c','d','h','s'};

	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d", &numcards);

	printf("Your Hand:");
	while ( numcards > 0 ) {
		suit = rand() % nums;
		rank = rand() % numr;
		if ( !inhand[suit][rank]) {
			inhand[suit][rank] = true;
			numcards--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n");

	return 0;
}
