#include <stdio.h>

int main(void) {
	int num[4][4];

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num[0][0], &num[0][1], &num[0][2], &num[0][3], &num[1][0], &num[1][1], &num[1][2], &num[1][3], &num[2][0], &num[2][1], &num[2][2], &num[2][3], &num[3][0], &num[3][1], &num[3][2], &num[3][3]);

	for(int i=0; i<4; i++) {
		for(int a=0; a<4; a++) {
			printf("%4d ", num[i][a]);
		}
		printf("\n");
	}
	
	int sum[4][4] = {0};
	int b=4;

	for(int i=0; i<4; i++) {
		for(int a=0; a<4; a++) {
			sum[0][i] += num[i][a];			// gpt said        sum[0][i] += num[i][a];
			sum[1][i] += num[a][i];			// gpt said 	   sum[1][a] += num[i][a];	really smart...
			if(a==i){
				sum[2][0] += num[i][a];
			}
			if(i+a == 3){
				sum[2][1] += num[i][a];
			}
		}
	}

	printf("Row sums: ");
	for(int i=0; i<4; i++) {
		printf("%4d", sum[1][i]);
	}
	printf("\n");
	printf("Column sums: ");
	for(int i=0; i<4; i++) {
		printf("%4d", sum[0][i]);
	}
	printf("\n");
	printf("Diagonal sums: ");
	for(int i=0; i<2; i++) {
		printf("%4d", sum[2][i]);
	}
	printf("\n");
	
	return 0;
}	
