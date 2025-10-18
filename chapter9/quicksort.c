#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void quicksort( int *a, int l, int h );
void swap( int *a, int b, int c ); 
void partarr( int *a, int l, int h, int pivpos );
void checksort( int *a );
void printarr( int *a, int size );

int main ( void ) {

	int *a;
	int size = 0;
	int fd = open( "/dev/urandom", O_RDONLY );
	unsigned int val;

	/* example random
	read( fd, &val, sizeof val );
	printf( "%u\n", val );
	read( fd, &val, sizeof val );
	printf( "%u\n", val );
	*/	
	
	// build array	
	printf( "\n" );	
	printf ( "Enter size of array: " );
	scanf ( "%d", &size );
	printf( "\n" );	
	
	a = malloc( sizeof(int) * size );

	for ( int j = size-1; j >= 0; j-- ) {
		read( fd, &val, sizeof val );
		a[j] = (int) val;	
	}
	
	// close "/dev/urandom"
	close( fd );
		

	// print array unsorted	
	printf( "unsorted" );
	printarr( a, size );	

	quicksort( a, 0, size-1 );

	// print array sorted
	printf( "sorted" );
	printarr( a, size );

	checksort( a );

	// end of programm
	free(a);
	return 0;
}


void quicksort( int *a, int l, int h ) {
	
	int pivpos = l;

	// identify pivpos
	for ( int i = l; i <= h; i++ ) {	
		if ( a[i] < a[l] ) pivpos++;
	}
	// put pivot-element into the correct positon
	swap( a, l, pivpos );

	// partition the array
	partarr( a, l, h, pivpos );

	// recursion high side
	if ( pivpos < h ) quicksort( a, pivpos+1, h );
	// recursion low side
        if ( pivpos > l ) quicksort( a, l, pivpos-1 );	

	return;
}

void printarr( int *arr, int size ) {

	printf( "\n" );	
	for ( int i = 0; i < size; i++ ) {
		printf( "%d ", arr[i] );
	}
	printf( "\n\n" );
}

void swap( int *arr, int a, int b ) {

	int c = arr[a];
	arr[a] = arr[b];
	arr[b] = c;
	return; 
}

void partarr( int *a, int l, int h, int pivpos ) {

	while ( 1 ) {
		while ( a[l] <= a[pivpos] && l < pivpos ) l++;
		while ( a[h] > a[pivpos] && h > pivpos ) h--;
		if ( l >= pivpos || h <= pivpos ) break;
		else swap( a, l, h );
	}
	return;
}

void checksort( int *a ) {

	for ( int i = 0; i < ( sizeof a / sizeof a[0] ) - 1; i++ ) {
		if ( a[i] > a[i+1] ) {
		       printf( "array is not sorted!\n\n" );
		       return;	       
		}
	}
	printf( "array successfully sorted!\n\n" );
	return;
}
