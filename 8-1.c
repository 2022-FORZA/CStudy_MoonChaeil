#include <stdio.h>
#define MAX 20

int main() {
	struct person {
		char name[MAX];
		int age, height;
	} s;

	printf("�����Է�: \n");
	printf("�̸��� �Է��ϼ���: ");  scanf("%s", s.name);
	printf("���̸� �Է��ϼ���: "); scanf("%d",&s.age);
	printf("Ű�� �Է��ϼ���: ");  scanf("%d", &s.height);

	printf("������: \n");
	printf("�̸�: %s\n", s.name);
	printf("����: %d\n", s.age);
	printf("Ű: %d\n", s.height);

}