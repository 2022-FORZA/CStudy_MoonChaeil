#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max(a,b) (((a)>(b)) ? (a) : (b))
#define min(a,b) (((a)<(b)) ? (a) : (b))

int main() {
	int t, n, m;
	double h=1;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &n, &m);

		for (int i = 2; i < min(m, n); i++) {
			if (m % i == 0 && n % i == 0)
				h = i;
		}

		if (m % n == 0 || n % m == 0)
			h = max(m, n);
		else if (h != 1)
			h = (m / h) * n;
		else
			h = m * n;

		printf("%.0f\n", h);
		h = 1;
	}
}