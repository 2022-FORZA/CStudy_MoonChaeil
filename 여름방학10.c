#include <stdio.h>
#define M 1000
int add(int a) {
	int sum = 0, i = 1;
	while (i <= a) {
		sum += i;
		i++;
	}
	return sum;
}

int main() {
	int num[M+1];

	num[1] = 1;
	for (int i = 2; i < 45; i++) {
		for (int k = add(i - 1) + 1; k <= add(i); k++) {
			num[k] = i;
		}
	}

	for (int i = 991; i <= M; i++)
		num[i] = 45;

	int first, last;
	scanf("%d %d", &first, &last);
	int sum = 0;
	for (int i = first; i <= last; i++) {
		sum += num[i];
	}

	printf("%d", sum);

}