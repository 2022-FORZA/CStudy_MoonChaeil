#include <stdio.h>
#define M 4
#define Part 60
int main() {
	int time[M], sum=0, cnt=0;
	for (int i = 0; i < M; i++) {
		scanf("%d", &time[i]);
		sum += time[i];
	}

	while (sum > 0) {
		sum -= Part;
		cnt++;
	}

	int last, left;

	if (sum == 0) {
		last = cnt;
		left = sum;
	}
	else {
		last = cnt - 1;
		left = sum + Part;
	}

	printf("%d\n", last);
	printf("%d\n", left);

}