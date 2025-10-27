#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void selection_sort( int * array_to_sort, int array_length );
void printarr( int *a, int len );

int main( void ) {
	char decider;
	int *a;
	int val, len, fd;
	printf( "This programm is sorting an array of integers using a selection sort algorythem,\n" );
	printf( "Do you want to enter a series of integers to sort or randomly generate and arry? [e/r]: " );
	scanf( "%c", &decider );
	printf ( "How long do you want the array to be?: " );
	scanf ( "%d", &len );
	a = malloc ( len * sizeof(int) );
cupcake:
	switch( decider ) {
		default:
			goto cupcake;
		case ( 'e' ):
			printf ( "Enter numbers according to the length of the array: " );
			for (int i = 0; i < len; i++ ) {
				scanf( "%d", &a[i] );
			}
			break;
		case ( 'r' ):				
			fd = open ( "/dev/urandom", O_RDONLY );
			for ( int i = 0; i < len; i++ ) {
				read( fd, &a[i], sizeof(int) );
				a[i] %= 99;
			}
			break;
	}
	printarr( a, len );
	selection_sort( a, len );
	printarr( a, len );	
	free( a );
	close( fd ); 	
}

void selection_sort( int * a, int len ) {
	int idx = len-1, highidx = 0, high = 0;
	while ( idx >= 0 ) {
		for ( int i = 0; i <= idx; i++ ) {
			if ( a[i] > high ) { 
				high = a[i];
				highidx = i;
			}
		}
		a[highidx] = a[idx];
		a[idx--] = high;
		high = a[0];
		highidx = 0;
	}
	return;
}

void printarr( int *a, int len ) {
	for ( int i = 0; i < len; i++ ) {
		printf( "%d ", a[i] );
	}
	printf( "\n" );
}

/*

  ╱|、
 (˚ˎ 。7
 |、˜〵
じしˍ,)ノ

*/

// I wrote a bash script that prints this cat at the end of my files :D
