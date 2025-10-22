#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>

int large( int* array_pointer, int length );
double average( int* array_pointer, int length );
int num_pos( int* array_pointer, int length );

int main( void ) {
	int *a;
	int len, la, pos;
	double avg;
	int fd = open( "/dev/urandom", O_RDONLY );

	srand(time(NULL));
	
	printf( "Enter array length: " );
	scanf( "%d", &len );
	a = malloc( sizeof(int) * len );
	for ( int i=0; i < len; i++ ) {
		// a[i] = rand() % 1000;
		read( fd, &a[i], sizeof(int) );
		a[i] %= 1000;
	}

	la = large( a, len );	
	avg = average( a, len );
	pos = num_pos( a, len );

	for ( int i=0; i<len; i++ ) {
		printf( "%d ", a[i] );
	}
	printf( "\n" );

	printf( "avg: %.3lf\t\nlen: %d\t\npos: %d\t\n", avg, len, pos );
	close(fd);
	free(a);
	return 0;
}

int large( int *a, int n ) {
	int large=0;
	for ( int i = 0; i < n; i++ ) {
		if ( a[i] > large ) large = a[i];
	}
	return large / n;
}

double average( int *a, int n ) {
	double sum=0;
	for ( int i = 0; i < n; i++ ) {
		sum += (double) a[i];
	}
	return ( sum / (double) n );
}

int num_pos( int *a, int n ) {
	int num=0;
	for ( int i = 0; i < n; i++ ) {
		if ( a[i] > 0 ) num += 1;
	}
	return num;
}
