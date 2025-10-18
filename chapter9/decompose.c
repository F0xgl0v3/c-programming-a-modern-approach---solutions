#include <stido.h> 

// this is an example programm, that demonstrates that 
// arguments are passed by value 
// and why this is a problem in some cases.
// lets say we wanted to modify i and d within the decompose function, then this code wouldnt perform what we wanted.
// also, we can return two numbers, only one.
// see section 11.4 for how this would be implemented.
// i assume that scopes will be introduced around that time, or atleast i hope so because that would mean i already know what its about.

void decompose ( double x, long int_part, double frac_part ) {
	
	int_part = ( long ) x; 		// casting to long drops the fractional part of x
	frac_part = x - int_part;

}

int main ( void ) {

	long i=0;
	double d=0;

	decompose( 3.14159, i, d );
	return 0;
	
}


