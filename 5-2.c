#include <stdio.h>

int main() {
	int y[5][5];
	int i;
	printf("0과 1로 이루어진 5X5 행렬을 입력하시오: \n");
	for (i = 0; i < 5; i++)
		scanf("%1d %1d %1d %1d %1d", &y[i][0], &y[i][1], &y[i][2], &y[i][3], &y[i][4]);


	int k, m;
	printf("몇 행 몇 열: \n");
	scanf("%d %d", &k,&m);
	int a;
	a = y[k][m];

	if (a == 0)
		printf("검은 돌이 놓여 있습니다");
	else
		printf("흰 돌이 놓여 있습니다");
}