#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	for (int i = num; i > 0; i--) {
		for (int j = i-1; j > 0; j--)
			printf(" ");
		for (int k = num - i+1; k > 0; k--)
			printf("*");
		printf("\n");
	}
}