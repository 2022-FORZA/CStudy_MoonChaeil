#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//brute force

int main() {
	int t = 5;
	int s[5], result = 0;

	for (int i = 0; i < t; i++)
		scanf("%d", &s[i]);

	for (int a = 1; ; a++) { //a는 최소공배수 값
		for (int b = 0; b < 5; b++) {
			if (a % s[b] == 0) //나머지 0일 때, 리스트 다른 값들로도 나눠서 result>=3이면 바로출력
				result++;
		}
		if (result >= 3) {
			printf("%d\n", a);
			break; //나오게 해야 함
		}
		else
			result = 0; //평소엔 result 0으로 하다가
	}
}

