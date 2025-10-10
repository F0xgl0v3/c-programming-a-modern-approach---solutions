#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main ( void ) {

	int temperature_readings[30][24] = { 0 };
	long sum = 0;
	double avrg = 0.0;

	srand(time(NULL));

	for( int i = 0; i < 30; i++ ) {
		for( int j = 0; j < 24; j++ ) {
			temperature_readings[i][j] = rand()%40;
		}
	}

	for( int i = 0; i < 30; i++ ) {
		for( int j = 0; j < 24; j++ ) {
			sum += temperature_readings[i][j];
		}
	}

	avrg = sum / (30*24);

	printf("%.2lf\n", avrg);

	return 0;
}
