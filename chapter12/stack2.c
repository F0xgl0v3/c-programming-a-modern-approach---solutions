#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 100

int contents[SIZE];
int *top_ptr = &contents[0];

void stack_overflow() { 
	printf( "stack overflow\nno action was performed\n" );
	return;
}
void stack_underflow() {
	printf( "stack underflow\nno action was performed\n" );
	return;
}

void push( int i ) {
	if ( is_full() ) stack_overflow();
	else *top_ptr++ = i;
}

int pop( void ) {
	if ( is_empty() ) stack_underflow();
	else return *--top_ptr;
}

int main( void ) {
	return 0;
}
