int read_line( char str[], int n ) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n' )
		if( i < n ) str[i++] = ch;
	str[i] = '\0';		// terminates the string
	return i;		// number of characters stored
}

// interesting fact, getchar returns an int, not a char.
