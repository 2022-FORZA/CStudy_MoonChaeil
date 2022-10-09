#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, q, r, d, cycle = 1;
	scanf("%d", &N);
	q = N / 10;
	r = N % 10;
	d = (q + r) % 10;
	M = 10 * r + d;
	while (N != M) {
		q = M / 10;
		r = M % 10;
		d = (q + r) % 10;
		M = 10 * r + d;
		cycle++;
	}
	printf("%d\n", cycle);
}