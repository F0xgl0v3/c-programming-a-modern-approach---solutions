#include <stdio.h>

// write a programm that axxepts a date from the user in the form mm/dd/yyyy and displays it in the form yyyymmdd:

int main(void){
	int d, m, y;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date: %.4d%.2d%.2d\n", y, m, d);
	return 0;
}
