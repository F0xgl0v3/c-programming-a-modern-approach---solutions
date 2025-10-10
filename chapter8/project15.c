#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( void ) {

	char cryp[80], n;
	int key = 0;
	int cnt = 0;

	printf("Enter message to be encrypted: ");
	
	while ( n != '\n' ) n = cryp[cnt++] = getchar();
	cryp[cnt--] = '\0';	

	printf("Enter a shirft amount (1-25): ");
	scanf("%d", &key);

	printf("Encrypted message: ");
	while ( cnt >= 0 ) {
		if ( isalpha(cryp[cnt])) {
			if ( islower(cryp[cnt]) ) cryp[cnt] = (((cryp[cnt] - 'a') + key ) %26 ) + 'a';
			else cryp[cnt] = (((cryp[cnt] - 'A') + key ) %26 ) + 'A';
		}
		cnt--;
	}
	printf("%s", cryp);

	return 0;
}
