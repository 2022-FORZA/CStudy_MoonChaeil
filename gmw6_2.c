#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int i, k = 0, flag = 0; // flag == 1이면 겹치는 글자 있음
	char cambridge[10] = { 'C','A','M','B','R','I','D','G','E' }, letter[101];
	scanf("%s", letter);

	for (i = 0; i < strlen(letter); i++) {
		for (int j = 0; j < 9; j++) {
			if (cambridge[j] == letter[i]) {
				flag = 1;
				break;
			}
		}
		if (!flag) printf("%c", letter[i]);
		flag = 0;
	}
}