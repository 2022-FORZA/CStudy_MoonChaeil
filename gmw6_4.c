#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int M, N, prime[10000], p = 2, sum = 0, min = 10000;

	scanf("%d", &M);
	scanf("%d", &N);

	prime[0] = prime[1] = 0;
	while (p < 10000) {
		prime[p] = 1, p++;
	} //1로 초기화
	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == 1) { //소수면, 배수는 소수가 아님.
			for (int k = 2; i * k <= N; k++)
				prime[i * k] = 0;
		}
	}

	p = M;
	while (p >= M && p <= N) {
		if (prime[p] == 1) {//소수인 경우
			sum += p;
			if (p < min)
				min = p;
		}
		p++;
	}

	if (sum == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}

}