#include <stdio.h>
#include <string.h>
#define MAX_LINE 80
///#define MAX_STR 3

int main() {
	int len, cnt = 0, sum = 0;
	char str[MAX_LINE];

	printf("���ڿ��� �Է��Ͻÿ�\n");

	while ( gets_s(sizeof(str)) != NULL) {
		len = strlen(str);
		printf("���ڿ� ����: %d \n", len);
		sum += len;
		cnt++;
	}
	printf("��ü ���ڿ� ����:            %d\n", cnt);
	printf("��ü ���ڿ� ������ ��:   %d\n", sum);

	return 0;
}




