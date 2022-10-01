#include <stdio.h>
int main() {
	int A = 1, num, i, k, l;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d %d", &k, &l);

		if (k == A)
			A = l;
		else if (l == A)
			A = k;
	}
	printf("%d", A);

}