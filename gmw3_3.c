#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, min = 0, scr = 0;
	char test[80]="";
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {//num��ŭ ������ �ڵ�
		scanf("%s", test);
		for (int j = 0; test[j] != NULL; j++) {
			if (test[j] == 'O') {
				for (int k = j; test[k] != NULL && test[k] == 'O'; k++) {//k��° ���ڿ� ooxoxoxox(����)�� ���ӵ� o ����
					min++;
					//printf("%d�� %d��°\n test[k=%d] == %c min == %d scr == %d\n", i, j, k, test[k], min, scr);
				}
				scr += min;
				min = 0;
			}
		}
		printf("%d\n", scr);
		scr = min = 0;
		for (int h = 0; test[h] != NULL; h++) test[h] = NULL;
	}
}