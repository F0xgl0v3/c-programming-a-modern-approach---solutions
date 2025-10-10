#include <stdio.h>

int main(void) {
	int gs1, group, publisher, item, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);
	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group, publisher, item, check);

	printf("\nThis is the structure of an ISBN (International Standard Book Number\n");

	while(1) {
		int select;

		printf("Do you want to know more about ISBN's?\n(1) what is the GS1 prefix?\n(2) what is the Group identifier?\n(4) what is the publishe code?\n(4) what is the item number?\n(5) what is the check digit?\n(6) exit programm.\n");
		scanf("%s", &select);
		
		if(select == 6){
			break;
		}	
	}
	return 0;
}
