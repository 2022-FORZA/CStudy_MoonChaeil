#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, min = 1000000, max = -1000000, a;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	
	printf("%d %d", min, max);

}