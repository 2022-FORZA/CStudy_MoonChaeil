#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char name[MAX][MAX];
	char stan[MAX];
	char* a,*l;
	int num, i;
	char* s = stan;

	scanf("%d", &num);
	scanf("%s", &stan);

	for (i = 0; i < num; i++)
		scanf("%s", name[i]);

	a = strchr(stan,'*'); //�� ��ġ �ּҰ�
	char* f = strtok(stan, "*"); //���� �������� �� ���ڿ� ����(front)         front * last �̷��� ������
	//char fr = *f;

	char *last = (a + 1); //�� ���� �� ���ڿ�

	for (i = 0; i < num; i++) {
		char* p = name[i];
		l = strrchr(name[i], last); //�ڿ������� name[i]�� last ����ִ��� Ȯ��
		if (strcmp(last,*l)==0) {
			if (strstr(name[i], *f) == &name[i]) //�� ���ڿ� �˻�
				printf("DA");
			else printf("NE");
		}
		else printf("NE");
	}
}