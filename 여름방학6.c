#include <stdio.h>
#include <stdlib.h>

void print(int N) {
	for (int i = 0; i < N; i++) printf("#");
	printf("\n");
	for (int j = 0; j < N - 2; j++) {
		printf("#");
		for (int i = 0; i < N - 2; i++)
			printf("J");
		printf("#\n");
	}
	for (int i = 0; i < N; i++) printf("#");
	printf("\n\n");
}

int main() {
	int num, i = 0, j = 0;

	scanf("%d", &num);

	int *p = (int*)malloc(sizeof(int)*num);
	
	while (i < num) {
		scanf("%d", &p[i]);
		i++;
	}
	
	while (j < num) {
		if (p[j] == 1) printf("#\n\n");
		else print(p[j]);
		j++;
	}

	free(p);
}
