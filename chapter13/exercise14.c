#include <stdio.h>

// What does the following programm print?

int main( void ) {
	char s[] = "Hsjodi", *p;
	for( p = s; *p; p++ )
		--*p;
	// as far as i can see it decrements the value of each char in s by 1 so the value of s should be "Grinch".
	puts(s);
	return 0;
}
