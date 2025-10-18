#include <stdio.h> 

#define N 10

void quicksort ( int a[], int l, int h );
int split ( int a[], int l, int h );

int main ( void ) {

	int a[N], i;

	printf( "Enter %d numbers to be sorted: ", N );
	for ( i = 0; i < N; i++ ) {
		scanf( "%d", &a[i] );
	}

	quicksort( a, 0, N -1 );
	printf( "In sorted order: " );
	for ( i = 0; i < N; i++ ) {
		printf( "%d ", a[i] );
	}
	printf( "\n" );

	return 0;

}

void quicksort ( int a[], int l, int h ) {

	int mid;

	if ( l >= h ) return;
	mid = split( a, l, h );
	quicksort( a, l, mid -1 );
	quicksort( a, mid + 1, h );

}

int split ( int a[], int l, int h ) {

	int p = a[l];
	for ( ;; ) {
		while ( l < h && p <= a[h] ) h--;
		if ( l >= h ) break;
		a[l++] = a[h];

		while ( l < h && a[l] <= p ) l++;
		if ( l >= h ) break;
		a[h--] = a[l];
	}

	a[h] = p;
	return h;

}
