#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long double N, M=0, test[1001], sum=0;

	scanf("%Lf", &N);
	for (int i = 0; i < N;i++) {
		scanf("%Lf", &test[i]);
		if (test[i] > M)
			M = test[i];
	}//test�� �޴� ���ÿ� Max ���ϱ�

	for (int i = 0; i < N; i++) {
		test[i] = test[i] / M * 100;
		sum += test[i];
	}

	printf("%Lf", sum / N);

}