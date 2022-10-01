#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 30
#define D 150
int find(const char A[], int N, char X);
int main() {
	int num;

	scanf("%d", &num);

	char plyr[D][M], fin[D] = {0};

	for (int i = 0; i < num; i++) {
		scanf("%s", plyr[i]);
		atoi(plyr[i]);
	}

	for (int i = 0; i < num; i++) {
		fin[i] = plyr[i][0];
	}

	int idx;
	int check[128]={0,};

	for (int i = 0; i < num; i++) {
		idx = fin[i];
		check[idx]++;
	}
	int k = 0;
	for (int i = 0; i < 128; i++) {
		if (check[i] >= 5) {
			printf("%c", i);
			k++;
		}
	}
	if (k == 0)
		printf("PREDAJA");
}


