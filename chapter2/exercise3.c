#include <stdio.h>
#define INCHES_PER_POUND 166

int main() {
	int height = 0, length = 0, width = 0;
	printf("Enter height: ");
	scanf("%d", &height);
	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter width: ");
	scanf("%d", &width);
	
	printf("Volume/166pounds: %d\n", ((height * length * width + 165) / 166));
}
