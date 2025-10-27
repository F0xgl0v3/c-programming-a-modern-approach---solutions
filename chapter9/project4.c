#include <unistd.h>
#include <fcntl.h>

// modify the programming project 16 from chapter 8 so that it includes the following fucntions:
// void read_word( int coutns[26] );
// bool equal_array( int counts1[26], int counts2[26]);
// main will call read_word twice, once for each of the two words entered by the user. As it reads a word, read_word will use the letter in the word to update the counts array, 
// as described in the original project. (main will declare two arrays, one for each word. 
// These arrays are used to track how many times each letter occurs in the words.) 
// main will then call equal_array, passing it the two arrays. equal_array will return true if the elements in the two arrays are identical (indicating that the words are anagramms) and false otherwise.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void read_word( int counts[26] );
bool equal_array( int counts[26], int counts2[26] );

int main ( void ) {

	char word1[30] = { 'a' }, word2[30] = { 'a' };
	int ccnt1[26] = { 0 }, ccnt2[26] = { 0 };
	int i = 0;
	bool neq = false;
	
	printf("Enter first word: ");
	read_word( ccnt1 );
	
	printf("Enter second word: ");
	read_word( ccnt2 );

	i = 0;

	// array equality check	
	neq = equal_array( ccnt1, ccnt2 );

print:
	if ( neq ) printf("The words are not anagrams.");
	else printf("The words are anagrams.");
	printf("\n");

	return 0;
}	

void read_word( int counts[26] ) {

	char word[30] = { 'a' };
	char c;
	int i = 0;

	while ( ( c = getchar() ) != '\n' ) {
		word[i++] = c;
	}

	word[i] = '\0';

	while ( i >= 0 ) { 
		if ( isalpha(word[i]) ) {
			counts[( toupper(word[i]) - 'A' )]++;
		}
		i--;
	}
	return;
}

bool equal_array( int counts[26], int counts2[26] ) {

	for ( int i = 0; i < 26; i++ ) {
		if ( counts[i] != counts2[i] ) return true;
	}
	return false;

}


/*

  ╱|、
 (˚ˎ 。7
 |、˜〵
じしˍ,)ノ

I-V4.2

*/
