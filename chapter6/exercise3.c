#include <stdio.h>

int main ( void ) {
	int i, j;
	printf("expected output: \n1. I think it wont compile since i and j are not declared\n2. I think we reduce j 2 so it will hit 0 first and therefor be the only relevant condition\n3. I think it will therefor 5 then 4 then 3\n");
	for ( i = 5, j = i -1; i > 0, j > 0; --i, j = i - 1 ) printf(" %d\n", i);
	printf("surprisingly it printed 5 4 3 2 which is one number more then I expected. What does it mean?\n--i in (--i, j = i - 1) doesnt pass --i to j = i - 1 ? but decrements it afterwards?");
}
