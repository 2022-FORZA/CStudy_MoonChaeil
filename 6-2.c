#include <stdio.h>
void swap(int* s, int* r) {
	int t;

	t = *s;
	*s = *r;
	*r = t;
}

int main() {
	int num, a,b,c, fin;
	int* p = &num;
	printf("�� �ڸ� ���� �Է��ϼ��� : ");
	scanf("%d", p);
	a=num/ 100;
	b=(num %100)/10;
	c=(num % 100) % 10;
	if (a > c) {
		swap(&a, &c);
		fin = 100 * a + 10 * b + c;
		printf("%d(��)�� �����", fin);
	}
	else {
		printf("%d(��)�� ������� ����", num);
	}

}