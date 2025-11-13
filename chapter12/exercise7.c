#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

// Write the following funciton:

bool search( const int a[], int n, int key );

// a is an array to be searched, n is the number of elements in the array, and key is the search key. search should return true if key matches some elemt of a, and false if it doesn't. 
// Use pointer arithmetic -not subscripting- to visit array elements.

int main( void ) {
	int n = 5;
	int a[n];

	for( int i = 0; i < n; i++ ) a[i] = i;

	printf( "%d\n", search( a, n, 3 ) );
	printf( "%d\n", search( a, n, 7 ) );

	return 0;

}

// wow this can be used to scan memory o_o guess i am going to rewrite my scanmem programm now :D
// the reason seems to be that &a[n] increases together with a everytime we increment a 
// interesting

/*
bool search( const int a[], int n, int key ) {

	while( a < &a[n] ) { 
		if( *a++ == key ) return true;
	}
	return false;

}
*/

bool search( const int a[], int n, int key ) {

	const int *i;

	for ( i = &a[0]; i < &a[n]; i++ ) { 
		if( *i == key ) return true;
	}
	return false;

}
