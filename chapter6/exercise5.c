#include <stdio.h>

int main ( void ) {
	int i  = 0;

	while ( i < 10 ) i++;
	i = 0;
	for ( ; i < 10; ) i++;
	i = 0;
	do {i++;} while ( i < 10 );
	// which one of the loops is not equivalent to the other 2?
	// printf(" the third loop is not equivalent to the other 2 loops because, the condition is checked after execution of the loopbody.\n that means it will go: increment i/run loop, then check, should we loop again?\n i=0 -> run loop -> i is now 1 -> ( i < 10 )?\n");
	// printf(" i=1 -> run loop -> i is now 2 -> ( i < 10 )?\n ...\n i=9 -> run loop -> i is now 10 -> ( i < 10 )?\n this leads to execution of the loopbody 10 time once for 0-9.\n");
	// printf(" the other two loops will basicly behave in the same way so i have no idea whats happening o_o\n i assume the difference lies within the fact that depending on when you increment i, the first two loops will not run when i hits 10 while the do loop will\n");
	printf(" ok this is wrong, i got it now! :D\n the difference lies withing the fact that if controllflow hits these loops, if ( i >= 10 ) to begin with, the do loop ( third one ) will still run once.\n the other two will not be executed in this case!\n");
	// printf(" the shit wrote before makes little sence lol");
}
