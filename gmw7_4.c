#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//brute force

int main() {
	int t = 5;
	int s[5], result = 0;

	for (int i = 0; i < t; i++)
		scanf("%d", &s[i]);

	for (int a = 1; ; a++) { //a�� �ּҰ���� ��
		for (int b = 0; b < 5; b++) {
			if (a % s[b] == 0) //������ 0�� ��, ����Ʈ �ٸ� ����ε� ������ result>=3�̸� �ٷ����
				result++;
		}
		if (result >= 3) {
			printf("%d\n", a);
			break; //������ �ؾ� ��
		}
		else
			result = 0; //��ҿ� result 0���� �ϴٰ�
	}
}

