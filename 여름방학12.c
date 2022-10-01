#include <stdio.h>
#include <stdlib.h>
#define min(a,b) ( ((a) < (b)) ? (a) : (b))
#define max(a,b) ( ((a) > (b)) ? (a) : (b))

int main() {
	int N, i;
	scanf("%d", &N);

	int* p = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
		scanf("%d", &p[i]);

	int small = p[0], big = p[0];

	for (i = 1; i < N; i++) {
		small = min(small, p[i]);
		big = max(big, p[i]);
	}

	int k = small * big;
	printf("%d", k);

	free(p);

}