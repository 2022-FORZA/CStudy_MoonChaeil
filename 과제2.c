#include <stdio.h>

long piv(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	else
		return piv(n - 1) + piv(n - 2);
}


int main() {
	int n;

	scanf("%d", &n);
	printf("%ld",piv(n));

	return 0;
}

