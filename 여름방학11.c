#include <stdio.h>

int main() {
	int N, q, d, M=0, a, cnt = 0;
	scanf("%d,", &N);
	
	q = N / 10;
	d = N % 10;
	if (N == 0) printf("1");
	else
	{
		while (M != N) {
			a = (q + d) % 10;
			M = 10 * d + a;
			cnt++;
			q = M / 10;
			d = M % 10;
			//printf("%d\n", M);
		}

		printf("%d", cnt);
	}

}