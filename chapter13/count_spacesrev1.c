int count_spaces( const char *s ) {
	int cnt = 0;
	
	for (; *s != '\0'; s++ ) {
		if ( *s == ' ' ) 
			cnt++;
	}
	return cnt;
}
