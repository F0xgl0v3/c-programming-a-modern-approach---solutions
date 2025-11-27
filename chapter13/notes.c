strings

convention: declare array like this char str[STR_LEN+1] to make it clear we need the null terminator '\0'

we can do this 

char str[STR_LEN+1], *p;
p = str;

p is now a pointer to the first character of str.

we can do this

char ch; 
ch = "abc"[1]; 

The value of ch will now be the letter b.
// interesting function:

char digit_to_hex_char( int digit) {
	return "0123456789ABCDEF"[digit];
}

reading and writing strings examples

writing
char str[] = "Are we having fun yet?";
printf( "%s\n", str );
-> Are we having fun yet?
printf( "%.6s\n", str );
-> Are we
printf( "%m.p", stf ); 		// %m.p is a conversion specifier. m is for justification( right, (-) left ), if m is smaller the STR_LEN, it just breaks the bounds.
puts( str );			// puts alwyas a newline character after printing the string.
-> Are we having fun yet?


reading 
char sentence[SENT_LEN+1];
pritnf( "Enter a sentence:\n" );
scanf( "%S", sentence );
printf( "%s", sentence );
-> Enter a Sentence: 
->  To C, or not to C: that is the question.
-> To 
printf( "Enter a sentence:\n" );
gets( sentence );
printf( "%s", sentence );
-> Enter a Sentence:
->  To C, or not to C: that is the question.
->  To C, or not to C: that is the question.

the difference between gets and scanf
- gets doesn't skip the white spaces before the string and the newline character '\n' is dropped and replaced with the null terminator '\0'.
- in contrast scanf does skip the white spaces and keeps the newline character '\n' in place.

%ns can be used to make scanf safer, n specifies the maximum number of character that can be stored in the char array.
gets vs fgets
i assume that fgets is formated gets and lets us use a format specifier aswell, this remains to be tested for now.


string.h 
char *strcpy( [dest], [src] );
char *strncpy( str1, str2, sizeof(str1) );
size_t strlen( const char *s ); 		// doesn't count the null terminater
char *strcat( char *s1, const char *s2 );
	strcpy( str1, "abc" );
	strcat( str1, "def" );			// str1 now contains "abcdef"
	strcpy( str1, "abc" );
	strcpy( str2, "def" );
	strcat( str1, str2 );			// str1 now contains "abcdef"
int strcmp( const char *s1, const char *s2 );   // will compare s1 and s2 if s1 < s2 -> 1 if s1 = s2 -> 0 if s1 > s2 1 || lexicograpic ordering. abc < abd and abc < abcd

As with strcpy, the value returned by strcat isnurmally discarded. The following example shows how the return value might be used:
strcpy( str1, "abc" );
strcpy( str2, "def" );
strcat( str1, strcat( str2, "ghi" ) );
	// str1 now contains "abcdefghi"; str2 contains "defghi"

example of a problem
char str1[6] = "abc";
strcat( str1, "def" );
will result in strcat writing '\0' to str1[6] ( which is out of bounds ) and str1 will only contain "abcdef" without the '\0' nullterminator. the solution is to use strncat.
strncat( str1, str2, sizeof( str1 ) - strlen( str1 ) - 1 ); 	// will copy write character to str1 only to strlen( str1 ) - 1 and then terminate str1 with a nullterminater '\0'.

the int representaion of '\0' is 0 so we can check for it like this *s != 0 and that would be equivalent to *s != '\0' while, at the same time, being shorter.
this leads to the crazy part ->
for( ; *s++; ) works!
this is bcs when the null terminator

size_t strlen( const char *s ) {
	size_t n = 0;

	while( *s++ ) 
		n++;
	return n;
}

a supposedly potentially faster version:

size_t strlen( const char *s ) { 
	const char *p = s;

	while( *s )
		s++;
	return s - p;
}

command-line arguments // programm parameters in C

we can write 
int main( int argc, char *argv[] ) {
}
and if we do so, argc is the argument count ( which strores the number of arguments )
and argv is the argument vector ( which stores the arguments in string format )
argv[argc] is always a nullpointer and argv[0] is the programm name


























