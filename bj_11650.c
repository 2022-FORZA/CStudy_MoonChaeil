#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100000

void swap(int* a, int* b) { //구조체, 퀵Qsort가 젤빠름, import
	int tmp; //구조체 정렬, 배열각각 , compare함수 쓴다.

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int N, x[MAX], y[MAX], tmp;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (int i = 1; i < N; i++) {
		for (int j=i-1; j>=0; j--)
			if (x[j] > x[i]) {
				swap(&x[j], &x[i]);
				swap(&y[j], &y[i]);
				swap(&i, &j);
			}
			else if ((x[j] == x[i]) && (y[j] > y[i])) {
				swap(&y[j], &y[i]);
				swap(&i, &j);
			}
	}
	  
	for (int i = 0; i < N; i++)
		printf("%d %d\n", x[i], y[i]);
}