#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, list[50], weight[50], height[50], rank[50]={0};

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &weight[i], &height[i]);
	
	for (int i = 0; i < N; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (weight[i] > weight[j] && height[i] > height[j])
				rank[j]++;
			else if (weight[i] < weight[j] && height[i] < height[j])
				rank[i]++;
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", rank[i]+1);

}