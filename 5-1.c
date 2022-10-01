#include <stdio.h>

int main() {
	int i, j;
	int x[3];
	int temp=0;
	int size = sizeof(x) / sizeof(x[0]);
	printf("세 개의 정수를 입력해 주세요.\n");
	for (i = 0; i < 3; ++i)
		scanf("%d", &x[i]);

	for (i = 0; i < size; ++i) {
		for (j = 0; j < size - 1 - i; ++j) {
			if (x[j] > x[j + 1]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < size; ++i)
		printf("%d ", x[i]);

	return 0;
}