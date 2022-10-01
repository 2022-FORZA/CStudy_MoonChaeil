#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, two;
	scanf("%d", &num);
	two = 2 * num;
	for (int i = 1; i < num; i++) {
		for (int l = 0; l < i; l++) printf("*");
		for (int j = 2 * (num - i); j>0;j--) printf(" ");
		for (int l = 0; l < i; l++) printf("*");
		printf("\n");
	}
	for (int i = 0; i < two; i++) printf("*");
	printf("\n");
	for (int i = num-1; i >0; i--) {
		for (int l = i; l >0; l--) printf("*");
		for (int j = 2 * (num - i); j >0; j--) printf(" ");
		for (int l = i; l > 0; l--) printf("*");
		printf("\n");
	}



}
