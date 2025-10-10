#include <stdio.h>

int main(void){

	int i;
	float x, y;

	printf("if the user enters \"12.3 45.6 789\", the values of x, i and y will probably be as follows:\nx=12.3\ny=45.6\ni=789\n but the reason for this is that I use the gcc compiler which can detect stuff like that.\n");
	printf("if i were to use the compiler the author of the book uses, assumably, the story would be diffrent, maybe an error because %%d will try to read until the \".\" and then we would have a problem after that, I think y would be .6 then, so\n");
	printf("x=12.3\ni=45\ny=0.6\nlets try.\n");
	printf("enter 12.3 45.6 786 please\n");
	scanf("%f%d%f", &x, &i, &y);
	printf("%f, %d, %f\n", x, i, y);
	printf("seems like i was partially right. the gcc compiler doesnt detect stuff like i expected it to do i guess x), so the output is as expected.\n");

	return 0;
}
