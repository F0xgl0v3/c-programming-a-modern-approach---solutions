#include <stdio.h>
#include <unistd.h>

int main() {

	printf("\"%%d\" and \" %%d\" are equivalent when used in a scanf call.\n");
	printf("\"%%d-\%d-%%d\" and \"\%d -%%d -\%d\" are not equivalent, the later allowes for spaces after the first and second int, but not for spaces between the \"-\" and the int.\n");
	printf("\"%%f\" and \"%%f \" ahsould be equivalent, im not sure tho :( guess i got to test it..\nyou know what to enter..\n");
	float foo;
	scanf("%f", &foo);
	printf("%f\n", foo);
	scanf("%f ", &foo);
	printf("%f\n", foo); 		// thinking about it, the programm will probably wait until i enter a space, maybe not tho lets see.
	printf("\"%%f,%%f\" and \"%%f, %%f\" are not equivalent, the later allows for spaces after the comma, the first one doesnt.\n");
	printf("so what we learned is the following:\nfirst of all \"%%\" isnt the same as \"\\%%\" the later gives me \"strange outputs\" as \"C-programming, a modern approach\" would put it. so the first one is the way to go.\n");
	printf("second, \"%%f\" and \"%%f \" differ in the following way: the first one just accepts a float as input, if i use the second one, it wants me to enter another input and hit enter a blank space isnt enought for this it has to be some kind of char.\n");
	
	sleep(3); 			// I just learnd to use the sleepfunction on the fly 8)

	printf("\n\n\nguess we will have to clean things up a bit now, i guess this is good practice. since i kinda want to remember a little bit of this.\n");
	printf("\"%%d\" and \" %%d\" are the same.\n");
	printf("\"%%d-%%d-%%d\" and \"%%d -%%d -%%d\" are not the same.\n");
	printf("\"%%f\" and \"%%f \" are not the same.\n");
	printf("\"%%f,%%f\" and \"%%f, %%f\" are not the same.\nim not gonna write the explainations down again, just see ^\n");

	return 0;
}
