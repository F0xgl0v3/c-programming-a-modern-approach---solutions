#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
// #include "sort.h"

// this function is supposed to return ( a[0] * b[0] ) + ( a[1] * b[1] ) + ... + ( a[n-1] * b[n-1] )
double inner_product( double array1[], double array2[], int length );
void printarr( double a[], int length );

int main ( void ) {
	double * arr1, * arr2;
	int len;
	uint64_t temp1;
	int fd = open( "/dev/urandom", O_RDONLY );
	// prototype: read( fd, &(dest), sizeof (dest) );
	
	printf( "Enter a length for the arryas: " );
	scanf( "%d", &len );

	arr1 = malloc( sizeof(double) * len );
	arr2 = malloc( sizeof(double) * len );

	for ( int i = 0; i < len; i++ ) {
		read( fd, &temp1, sizeof temp1 );
		arr1[i] = (temp1 % 1000);
		read( fd, &temp1, sizeof temp1 );
		arr2[i] = (double) (temp1 % 1000);
	}

	printf( "Array1: \t" );
	printarr( arr1, len );
	printf( "Array2: \t" );
	printarr( arr2, len );
	printf( "Inner Product: \t%.3lf\n", inner_product( arr1, arr2, len ) );
	


	free( arr1 );
	free( arr2 );
	close( fd );
	return 0;
}

double inner_product( double a[], double b[], int len ) {
	double sum = 0;
	for ( int i = 0; i < len; i++ ) {
		sum += ( a[i] * b[i] );
	}
	return sum;
}

void printarr( double a[], int len ) {
	for ( int i = 0; i < len; i++ ) printf( "%.3lf ", a[i] );
	printf( "\n" ); 
	return;
}
