#include <stdio.h>
#include <stdlib.h>

int main() {
	int day;
	long long W, C=0; //long이어도 상관 없음, 단 int는 안됨(왜?)

	scanf("%d %lld", &day, &W);

	int* p = (int*)malloc(sizeof(int) * day);

	for (int i = 0; i < day; i++)
		scanf("%d", &p[i]);

	for (int i = 0; i < day; i++) {
		if (p[i] > p[i + 1]) {
			W += C * p[i];
			C = 0;
		}
		else if (p[i] < p[i + 1]) {
			long long k = W / p[i]; //개수, C = W/p[i]라고 할 경우 오류 생김
			W -= k * p[i];
			C += k;
		}
	}

	W += C * p[day - 1];
	free(p);

	printf("%lld", W);
}