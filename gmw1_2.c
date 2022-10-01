#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[9], max_num;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max)
		{
			max = a[i];
			max_num = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", max_num);
}