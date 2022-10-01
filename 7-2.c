#include <stdio.h>
#include <string.h>
int main() {
	char pattern[101], filename[101]; // ������ ������ �迭�� �����̸��� ������ �迭
	int n, plen; // �ݺ� Ƚ���� ���� ���̸� ������ ����

	scanf("%d", &n);
	scanf("%s", pattern);
	plen = strlen(pattern);

	while (n--) {
		scanf("%s", filename);
		int star, flag = 1, flen = strlen(filename);
		// pattern���� *�� ��ġ �ε����� ������ ����star
		// ���� ���� �������� ������ ���� flag(���� 1, ������ 0)

		for (int i = 0; i < plen; i++) // * ��ġ ã�� star�� ����
			if (pattern[i] == '*')
				star = i;

		for (int i = 0; i < flen && i < star; i++) { // �� �κ� ���� �³� ���ϴ� for��
			if (filename[i] != pattern[i]) { // Ʋ����
				flag = 0; // ���������� �ٲٰ�
				break; // ���� Ż��
			}
		}

		for (int i = 1; flag && (plen - i) > star; i++) { // �� ������ ������ ���� �޺κ�(*���� ū �κ�) ��
			if ((flen - i) < star) flag = 0; // ���� ���ڿ��� ���Ϻ��� ���ڶ�� ������
			if (filename[flen - i] != pattern[plen - i]) flag = 0; // ���Ϲ��ڰ� �ٸ��� ������
		}
		// �� for������ break�� ���� �ʴ� ���� 
		//: flag�� 1(��)�� ���� for���� ���� ���ǿ� ���ԵǾ������Ƿ� flag�� breakó�� ���

		if (flag) printf("DA\n"); // �����̸� DA���
		else printf("NE\n"); // ������ NE ���
	}
}