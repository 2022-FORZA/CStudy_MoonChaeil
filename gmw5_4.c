#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A, B, C, n;

	scanf("%d %d %d", &A, &B, &C);
	if (C > B) {
		n = A / (C - B) + 1;
		printf("%d\n", n);
	}
	else if (B>=C)
		printf("-1\n");

}