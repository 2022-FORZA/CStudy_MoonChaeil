#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 30
int main() {
	int num;
	scanf("%d", &num);

	char** plyr = malloc(sizeof(char*) * (num + 1));

	for (int i = 0; i < num; i++)
		plyr[i] = malloc(sizeof(char) * M);

	for (int i = 0; i < num; i++)
		scanf("%s", &plyr[i]);

	for (int i = 0; i < num; i++) {
		free(plyr[i]);
		printf("%s\n", &plyr[i][0]);
	}


	int num;
	scanf("%d", &num);

	char* names = (char*)malloc(sizeof(char) * (num + 1));
	char* num2 = (char*)malloc(sizeof(char) * (num + 1));
	char buf[M];
	for (int i = 0; i < num; i++) {
		scanf("%s", buf);
		strcpy(*num2, buf);
		names[i] = *num2;
		if (names[i] == NULL) names[i] = *num2;
	}

	for (int i = 0; i < num; i++) {
		printf("%d %s", i, names[i]);
		free(names[i]);
	}


}