#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define M 52 //���๮�ڿ� NULL���� ����Ͽ� 50�� �ƴ϶� +2

int main() {
	int n;
	char file[M], form[M], pattern[M];
	scanf("%d", &n);

	if (n == 1)
		scanf("%s", file), strcpy(pattern, file);

	else{
		for(int j=0; j<n; j++){
			scanf("%s", file);
			if(j != 0){ //��
				for (int i = 0; i < strlen(file); i++) {
					if (file[i] == form[i] && pattern[i] != '?')
						pattern[i] = file[i];
					else
						pattern[i] = '?';
				}
			}
			strcpy(form, file);
		}
	}
	pattern[strlen(file)] = '\0';
	printf("%s\n", pattern);

}
