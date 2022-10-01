#include <stdio.h>
#include <string.h>
#define X 2
#define D 100

float cal(char K[]) {
	float s;
	if (strchr(K, 'A') != NULL) {
		s = 4;
		if (strchr(K, '+') != NULL)
			s += 0.3;
		if (strchr(K, '-') != NULL)
			s -= 0.3;
	}
	else if (strchr(K, 'B') != NULL) {
		s = 3;
		if (strchr(K, '+') != NULL)
			s += 0.3;
		if (strchr(K, '-') != NULL)
			s -= 0.3;
	}
	else if (strchr(K, 'C') != NULL) {
		s = 2;
		if (strchr(K, '+') != NULL)
			s += 0.3;
		if (strchr(K, '-') != NULL)
			s -= 0.3;
	}
	else if (strchr(K, 'D') != NULL) {
		s = 1;
		if (strchr(K, '+') != NULL)
			s += 0.3;
		if (strchr(K, '-') != NULL)
			s -= 0.3;
	}
	else s = 0;

	return s;
}


int main() {
	struct grade
	{
		char name[D];
		char grade[X];
		int sc;
	} g[D];
	int num, i, j, l = 0;
	float sum = 0, tot;

	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%s %d %s", g[i].name, &g[i].sc, g[i].grade);
	}

	for (j = 0; j < num; j++) {
		sum += cal(g[j].grade) * g[j].sc;
		l += g[j].sc;
	}

	tot = sum / l;

	printf("%.2f", tot);
}