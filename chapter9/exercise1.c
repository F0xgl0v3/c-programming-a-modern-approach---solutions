#include <stdio.h>
#include <stdlib.h>

// this function contains 2 errors.

/*
double triangle_area_faulty( double base, double height )
double product;
{
	product = base * height;
	return product / 2;
}
*/

// this function doesnt. 

double triangle_area( double base, double height ) {	
	double product;
	product = base * height;
	return product / 2;
}

// the two errors are that we try to declare a non parameter variable outside of the body of the function definition
// and that we dont give a type for the second parameter.
// proof

int main( void ) {

	double base, height, prod;

	printf( "Enter base of triangle: " );
	scanf( "%lf", &base );
	printf( "Enter height of triangle: " );
	scanf( "%lf", &height );

	// printf( "Area of the triangle: %lf\n", ( prod = triangle_area_faulty( base, height )) );
	printf( "Area of the triangle: %lf\n", ( prod = triangle_area( base, height )) );
	

	return 0;
}
