#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 5, r = 0, k[5] = { 0, }, result = 0;
	char agent[11] = { 0, };

	while (i--) {
		scanf("%s", agent);
		for (int j = 0; agent[j] != NULL; j++) {
			if (agent[j] == 'F')
				if (agent[j + 1] == 'B')
					if (agent[j + 2] == 'I') {
						result++, k[r] = 5 - i, r++;
						break;
					}
		}//FBIFBI�ϸ� �ݷ�, �ѹ� �ϰ� ���� ������ �ؾ� ��
		for (int j = 0; agent[j] != NULL; j++)
			agent[j] = 0;//�����Ⱚ �ʱ�ȭ
	}

	if (result > 0)
		for (int j = 0; k[j] != NULL; j++)
			printf("%d ", k[j]);
	else
		printf("HE GOT AWAY!");

}