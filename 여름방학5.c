#include <stdio.h>
#include <stdlib.h>
#define min(a,b) ( ((a) < (b)) ? (a) : (b))

int main() {
	int mush[10] = { 0, }, sum[10] = { 0, }, i;
	for (i = 0; i < 10; i++)
		scanf("%d", &mush[i]);

	for (i = 0; i < 10; i++) {
		for (int k = 0; k <= i; k++)
			sum[i] += mush[k];
	}

	int minus[10] = { 0, };
	for (i = 0; i < 10; i++)	minus[i] = abs(sum[i] - 100);

	int min1 = minus[0], fin;

	for (i = 1; i < 10; i++)
		min1 = min(min1, minus[i]); //가장 차가 작은 i 뽑기

	for (i = 9; i >= 0; i--){
		if (min1 == minus[i]){
			fin = i;
			printf("%d", sum[fin]);
			break;
		}
	}

}

