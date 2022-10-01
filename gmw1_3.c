#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[10], nam[43]={0}, a, k = 0, l = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		a = num[i] % 42;
		nam[a]++;
	}

	while (k <= 42) {
		if (nam[k] > 0)
			l++;
		k++;
	}

	printf("%d", l);
}