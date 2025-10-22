#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

float compute_GPA( char grades[], int n );
void printiarr( int *array, int length );
void printcarr( char *array, int length );

int main ( void ) {
	int *arr;
	int len;
	char *grades;
	
	printf( "Enter array length: \t" );
	scanf( "%d", &len );
	arr = malloc( sizeof(int) * len );
	grades = malloc( sizeof(char) * len );

	int fd = open( "/dev/urandom", O_RDONLY );
	for ( int i = 0; i < len; i++ ) {
		read(fd, &arr[i], sizeof(int));
		arr[i] %= 5;
		if ( arr[i] < 0 ) arr[i] *= -1;
	}
	for ( int i = 0; i < len; i++ ) {
		switch ( arr[i] ) {
			case 0:
				grades[i] = 'F';
				break;
			case 1:
				grades[i] = 'D';
				break;
			case 2:
				grades[i] = 'C';	
				break;
			case 3:
				grades[i] = 'B';
				break;
			case 4:
				grades[i] = 'A';
				break;
			default:
				break;
		}
	}

	printf( "numeric grades: \t" );
	printiarr( arr, len );
	printf( "grades: \t\t" );
	printcarr( grades, len );
	printf( "average: \t\t%.3f\n", compute_GPA( grades, len ) );
		
	close( fd );
	free( arr );
	free( grades );
	return 0;
}

float compute_GPA( char g[], int len ) {
	float sum=0;
	for ( int i = 0; i < len; i++ ) {
		switch ( g[i] ) {
			case 'A': case 'a':
				sum += 4;
				break;
			case 'B': case 'b':
				sum += 3;
				break;
			case 'C': case 'c':
				sum += 2;	
				break;
			case 'D': case 'd':
				sum += 1;
				break;
			case 'F': case 'f':
				sum += 0;
				break;
			default:
				break;
		}	
	}		
	sum /= len;
	return sum;
}

void printiarr( int *a, int len ) {
	while ( --len >= 0 ) printf( "%d ", a[len] );
	printf( "\n" );
	return;
}

void printcarr( char *a, int len ) {
	while ( --len >= 0 ) printf( "%c ", a[len] );
	printf( "\n" );
	return;
}
