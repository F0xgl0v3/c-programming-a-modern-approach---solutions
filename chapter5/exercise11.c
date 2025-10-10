#include <stdio.h>
#define p printf

int main (void) {
	int prefix; 

	p("Enter an Area code: ");
	scanf("%d", &prefix);

	switch ( prefix ) {
		case 229 : p("Albany\n");
			   break;
		case 404 : p("Atlanta\n");
			   break;
		case 470 : p("Atlanta\n");
			   break;
		case 478 : p("Macon\n");
			   break;
		case 678 : p("Atlanta\n");
			   break;
		case 706 : p("Columbus\n");
			   break;
		case 762 : p("Columbus\n");
			   break;
		case 770 : p("Atlanta\n");
			   break;
		case 912 : p("Savannah\n");
			   break;
		default : p("Area code not found\n");
	}

	return 0;
}
