#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define M 52 //개행문자와 NULL까지 고려하여 50이 아니라 +2

int main() {
	int n;
	char file[M], form[M], pattern[M];
	scanf("%d", &n);

	if (n == 1)
		scanf("%s", file), strcpy(pattern, file);

	else{
		for(int j=0; j<n; j++){
			scanf("%s", file);
			if(j != 0){ //비교
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
