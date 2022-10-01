#include <stdio.h>
#include <string.h>
#define M 100

int main() {
	char* name[M];
	char stan[M];
	int num, i, k;

	scanf("%d", &num);
	scanf("%s", &stan);
	for (int i = 0; i < num; i++) scanf("%s", &name[i]);
	
	char* last;
	char* front = strtok_s(stan, "*", &last);

	//printf("front = %s\n", front);
	//printf("last = %s\n", last);

	char* voc[M];
	char* tem;
	k=strlen(last);

	for (i = 0; i < num; i++) {
		if (strstr(name[i], front) == name[i])
			if (strstr(name[i], last) != NULL) {
				for (int j = 0; j < k; j++) {
					voc[j] = strrchr(name[i], last[j]);
					strcat(tem, voc[j]);
				}
				if (tem == last)
					printf("DA\n");
				else
					printf("NE\n");
			}
			else
				printf("NE\n");
		else
			printf("NE\n");
	}

}