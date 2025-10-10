#include <stdio.h>
#define p printf 
#define s scanf
#define true 1
#define false 0

int main (void) {
	int age, teenager;
	
	p("Enter age: ");
	s("%d", &age);

	if ( age < 20 && age > 12 ) 
		teenager = true;
	else 
		teenager = false;

	p("%d\n", teenager);
}
