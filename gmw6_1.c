#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c = 3, num, numlist[8], p, cnt = 1, max = 1;

	while (c--) {
		scanf("%d", &num);
		p = 10000000;
		for (int i = 0; i < 8; i++) {
			numlist[i] = num / p;
			num %= p;
			p /= 10;
			//printf("%d\n", numlist[i]);
		}//리스트에 num의 숫자들을 차례대로 넣어줌

		cnt = max = 1;
		for (int j = 0; j < 7; j++) {
			if (numlist[j] != numlist[j + 1]) {
				max = max > cnt ? max : cnt;
				cnt = 1;
				continue;
			}
			cnt++;
		}

		max = max > cnt ? max : cnt;
		printf("%d\n", max);
	}
}