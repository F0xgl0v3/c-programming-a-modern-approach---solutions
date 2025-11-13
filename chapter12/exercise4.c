#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;
int *top_ptr = &contents[0];

void make_empt( void ) {
	// this
	top_ptr = &contents[0];
	return;
}

bool is_empty( void ) {
	// this
	return top_ptr == &contents[0];
}

bool is_full( void ) {
	// this 
	return top_ptr == &contents[STACK_SIZE];
}

void push( int i ) {
	if ( is_full() ) stack_overflow();
	else
		*top_ptr++ = i;
}

int pop( void ) {
	if ( is_empty() ) stack_underflow();
	else
		return *--top_ptr = i;
}
