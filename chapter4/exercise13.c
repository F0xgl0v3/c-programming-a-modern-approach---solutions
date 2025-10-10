#include <stdio.h>

int main(void) {
	printf("question: \"Only one of these to expressions ++i and i++ is equivalent to (i += 1), which one is it?\n");
	printf("Answer: \"(++i) is equivalent to (i += 1), they will both return the value of (i+1) and set the value of i to (i + 1), while (i++) will return (i) and then set i to (i + 1)\n");
	return 0;
}
