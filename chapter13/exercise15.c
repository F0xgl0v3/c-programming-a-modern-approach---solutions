#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

// Let f be the following function:

int f( char *s, char *t ) {
	char *p1, *p2;

	for( p1 = s; *p1; p1++ ) {
		for( p2 = t; *p2; p2++ ) {
			if( *p1 == *p2 ) break;
		}
		if( *p2 == '\0') break;
	}
	return p1 - s;
}

// ok, what this function does is looping trough s using a pointer. for each element in s we then loop through t, 
// now, if we find an element in t, that has the same value as the char we are looking at in s. and then we break form the inner loop.
// right now, in my mind, the inner loopis totaly irrelevant.
// but this is actually not true. 
// if we dont find the character in t, *p2 will be '\0', so we will break form the outter loop as well. this means: if we encounter a char in s, that is not included in t, we will break from both loops.
// then, we substract s from p1, which is now pointing to the first character in s that is not included in t. this way we get the position of said character as a result and then we return it.
// now we can test if we are correct.

int main( int argc, char *argv[] ) {
	char *s = argv[1];
	char *t = argv[2];

	printf( "%s\n%s\n%d\n", s, t, f( s, t )+1 );	

	return 0;
}

// ok it seems like the function is actually returning the first position at which the two stings differ.
// let me see why that is, bcs so far, my mind tells me that my initial interpretation should be correct. 
// no, every time we enter the second loop, we loop through the entire t sting. so my initial interpretation must be correct.
// i came to the conclusion that it was wrong because it tested the funcition with the strings: 
// "the first one"
// and
// "the second one"
// and it gave me 4. which is obvioulsly correct, there is no f in "the second one" so 4+1 is the position of the first character in s that is not included in t. 
// I was thinking the wrong way around, i was looking at s and thouhgt: huh, there is an s in "the first one", why does it give me 4?
// I will try it the other way around now, but im sure now. ye now it gives me 7, wich corresponds to c and this is correct. nice.
// I think I forgot these:

//	pritnf( "%d\n", f("abcd", "babc") ); // 3
//	pritnf( "%d\n", f("abcd", "bcd") ); // 0
