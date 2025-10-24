#include <stdio.h>
#include <stdbool.h>

// the false variant.
bool has_zero_false( int a[], int n ) {
	int i;
	for ( i=0; i< n; i++ ) 
		if ( a[i] == 0 ) return true;
		else return false;	
}

// the corrected variant.
bool has_zero_corrected( int a[], int n ) {
	int i;
	for ( i=0; i<n; i++ ) 
		if( a[i] == 0 ) return true;	
	return false;
}

// the error was that the way the the for loop was structured, made it so only the first element of the array would be checked, bcs it call a return statement for false if it reaches a non-zero value or respectivly returns true 
// if the first element is a zero. what i am not sure about is if the error is that, since we dont use curly brackets for our for loop, we hit an else outside of the for loop and it is there for a syntax error aswell. 
// I mean, i could check it...

int main ( void ) {
	int a[3] = { 0, 1, 1 }, b[3] = { 1, 1, 0 }, c[3] = { 1, 1, 1 };
	
	printf( "flase: a b c\n%d\n%d\n%d\n", has_zero_false( a, 3 ), has_zero_false( b, 3 ), has_zero_false( c, 3 ) );
	printf( "corrected: a b c\n%d\n%d\n%d\n", has_zero_corrected( a, 3 ), has_zero_corrected( b, 3 ), has_zero_corrected( c, 3 ) );
        return 0;	
}

// well it gives me no error and it produced the expected output, so i assume that the else is within the forloop, even without the curly brackets, I didnt know that. Now I know.
