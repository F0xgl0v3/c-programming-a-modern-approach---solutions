#include <stdio.h>
#define PI 3.1415f

int main () {
	float r;
	printf("please enter the radius of your sphere: ");
	scanf( "%f" , &r );
	printf("the volume of your sphere is: %.2f\n", (4/3*PI*r*r*r));
	return 0;
}
