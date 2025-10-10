#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main ( void ) {

	char word1[30] = { 'a' }, word2[30] = { 'a' };
	int ccnt1[26] = { 0 }, ccnt2[26] = { 0 };
	int i = 0;
	bool neq = false;
	char c;
	
	printf("Enter first word: ");

	while ( ( c = getchar() ) != '\n' ) {
		word1[i++] = c;
	}
	word1[i] = '\0';
	
	i = 0;

	printf("Enter second word: ");

	while ( ( c = getchar() ) != '\n' ) {
		word2[i++] = c;
	}
	word2[i] = '\0';

	i = 0;

	// size comparison
	
	if ( sizeof(word1) != sizeof(word2) ) {
		neq = false;
		goto print;
	}

	// count characters in each word

	while ( i < sizeof(word1)/sizeof(word1[0]) ) {
		if ( isalpha(word1[i]) ) ccnt1[(toupper(word1[i]) - 'A')]++;
		if ( isalpha(word2[i]) ) ccnt2[(toupper(word2[i]) - 'A')]++;
		i++;
	}
		
	// array equality check
	
	for ( int i = 0; i < 26; i++ ) {
		if ( ccnt1[i] != ccnt2[i] ) neq = true;
	}

print:
	if ( neq ) printf("The words are not anagrams.");
	else printf("The words are anagrams.");
	printf("\n");

	return 0;
}	
