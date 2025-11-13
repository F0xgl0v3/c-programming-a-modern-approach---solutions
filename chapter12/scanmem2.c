#include <stdio.h>
#include <stdlib.h>  // this is what i am supposed to use to prevent a segfault error but being able to implement a catch using a "signal handler" amazing :3
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>

// seemingly I can use inline assembly to make my label global, lets try this.
#define LABEL_SYMBOL(name) asm volatile("labelsym_" name "_%=: .global labelsym_" name "_%=":);


int bytecnt = 0;
int n = 1;
char *a = (char []){ 1, 2 };

// This is the signal handler function
void segfault_handler(int signal) {
    // This is one of the few safe things you can do.
    // write() is async-signal-safe, printf() is not.
    write(STDOUT_FILENO, "Caught a segfault! Exiting.\n", 28);
    printf("%d\n", bytecnt);
	while( --a < &a[n] ) {
		printf( "%x %x %x %x\n", *a, *a++, *a++, *a++ );
		bytecnt += 4;
	}
    _exit(1); // Exit immediately
}

void try_stuff( int signal ) {

	// LABEL_SYMBOL("cake");
	//goto cake;
	return;

}

int main( void ) {


	// singal( SIGSEGV, [function to call] ); this is a template for using a singla handler 
	
	signal( SIGSEGV, segfault_handler );
	// signal( SIGSEGV, try_stuff );

	while( a++ < &a[n] ) {
		printf( "%x %x %x %x\n", *a, *a++, *a++, *a++ );
		bytecnt += 4;
	}
	/*
cake:
	// printf( "%d\n", bytecnt );
	write( STDOUT_FILENO, "Caught a segfault! Exiting.\n", 28);
	_exit(1);
	*/

	return 0;
}
