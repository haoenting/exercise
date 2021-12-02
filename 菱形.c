#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a,Z=1;
	scanf("%d", &a);
	for (int x = a - 1; x > 0; x--) {
		printf(" ");
	}
	printf("*\n");
	for (int y = a-2; y >0;y--) {
		for (int m = y-1; m >= 0; m--) {
			printf(" ");
		}
		printf("*");
		for (int z=Z;z>0;z--) {
			printf(" ");
		}
		Z += 2;
		printf("*\n");
	}
	for (int y = 0; y < a-1; y++) {
		for (int m = y; m > 0; m--) {
			printf(" ");
		}		
		printf("*");
		for (int z = Z; z > 0; z--) {
			printf(" ");
		}
		Z -= 2;
		printf("*\n");

	}


	for (int x = a - 1; x > 0; x--) {
		printf(" ");
	}
	printf("*\n");
	//system("pause");
	return 0;
}
