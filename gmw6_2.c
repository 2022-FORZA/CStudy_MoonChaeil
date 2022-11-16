#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* strip(char s[]) {
	char str[101];
	int i, k = 0;
	for (i = 0; i < strlen(s); i++)
		if (s[i] != ' ') str[k++] = s[i];

	str[k] = '\0';
	return str;
}

int main() {
	char cambridge[10] = { 'C','A','M','B','R','I','D','G','E' }, letter[101];
	scanf("%s", letter);

	for (int i = 0; i<strlen(letter); i++) {
		for (int j = 0; j < 9; j++) {
			if (cambridge[j] == letter[i])
				letter[i] = ' ';
		}
	}
	printf("%s", strip(letter));
}