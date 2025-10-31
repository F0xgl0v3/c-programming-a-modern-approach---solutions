#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty( void ) {
	top = 0;
	return;
}

bool is_empty( void ) {
	return top == 0;
}

bool is_full( void ) {
	return top == STACK_SIZE;
}

void stack_overflow( void ) {
	printf( "stack overflow\n" );
	_exit(0);
	return;
}

void stack_underflow( void ) {
	printf( "stack underflow\n" );
	_exit(0);
	return;
}

void push( char c ) {
	if ( is_full() ) stack_overflow();
	else contents[top++] = c;
	return;
}

char pop( void ) {
	if ( is_empty() ) { 
		stack_underflow();
		return '\0';
	}
	else return contents[--top];
}

int main( void ) {

	char temp = '0';
	bool neq = false;
	printf( "Enter parentheses and/or braces: " );
	while ( temp != '\n' ) {
	       	temp = getchar();
		if ( temp == '(' || temp == '[' || temp == '{' ) push( temp );
		else if ( temp == ')' || temp == ']' || temp == '}' ) {
			switch ( temp ) {
				case ')': if ( pop() != '(' )
						  neq = true;
					  break;
				case ']': if ( pop() != '[' )
						  neq = true;
					  break;
				case '}': if ( pop() != '{' )
						  neq = true;
					  break;
				default: break;
			}
		}
	}

	if ( top > 0 ) {
		neq = true;
	}
	if ( !(neq) ) printf( "Parentheses/braces are nested properly\n" );
	else printf( "Parentheses/braces are not nested properly\n" );

	temp = '0';

	return 0;
}
