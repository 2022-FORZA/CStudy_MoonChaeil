#include <stdio.h>

int main() {
	int y[5][5];
	int i;
	printf("0�� 1�� �̷���� 5X5 ����� �Է��Ͻÿ�: \n");
	for (i = 0; i < 5; i++)
		scanf("%1d %1d %1d %1d %1d", &y[i][0], &y[i][1], &y[i][2], &y[i][3], &y[i][4]);


	int k, m;
	printf("�� �� �� ��: \n");
	scanf("%d %d", &k,&m);
	int a;
	a = y[k][m];

	if (a == 0)
		printf("���� ���� ���� �ֽ��ϴ�");
	else
		printf("�� ���� ���� �ֽ��ϴ�");
}