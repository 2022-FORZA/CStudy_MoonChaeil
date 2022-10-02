#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() {
	int N, list[100];
	long M, com[170000], K, ans;
	scanf("%d %ld", &N, &M);

	for (int i = 0; i < N; i++) 
		scanf("%d", &list[i]);

	int m = 0;
	long min = M;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				com[m] = list[i] + list[j] + list[k];
				K = M - com[m];
				if (K >= 0 && K < min) {
					ans = com[m];
					min = K;
				}
				m++;
			}
		}
	}

	printf("%ld", ans);
}