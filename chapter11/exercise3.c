#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// the following function supposedly computes the sum and average of the numbers in the array a, which has length n avg and sum point to variables that the function should modify.
// Unfortunatly, the function contains several errors, find and correct them.

void avg_sum_corrected( double a[], int, double *, double * );
// void avg_sum_faulty( double a[], int, double *, double * );

int main( void ) {

	int fd = open( "/dev/urandom", O_RDONLY );
	int n = 10;
	double a[n];
	double avg = 0, sum = 0;

	for ( int i = 0; i < 10; i++ ) {
		read( fd, &a[i], sizeof(double) );
	}

	avg_sum_corrected( a, n, &avg, &sum );
	// avg_sum_faulty( a, n, &avg, &sum );
	
	printf( "avg: %lf\nsum: %lf\n", avg, sum );

	return 0;

}

void avg_sum_corrected( double a[], int n, double *avg, double *sum ) {

	int i;

	*sum = 0.0;
	for ( i = 0; i < n; i++ ) *sum += a[i];
	*avg = (*sum)/n;

	return;

}

/*
void avg_sum_faulty( double a[], int n, double *avg, double *sum ) {

	int i;

	sum = 0.0;
	for ( i = 0; i < n; i++ ) sum += a[i];
	avg = sum/n;

	return;
}
*/
