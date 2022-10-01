#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int N) {
	int k;
	if (N <= 1)
		k = 1;
	else
		k = N * fact(N - 1);
	return k;
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", fact(N));
}