#include <stdio.h>
typedef struct square {
	int x;
	int y;
} s;


int main() {
	s l, r, z, * p;
	int area, per;
	p = &z;
	printf("���� ����� ��ǥ�� �Է��ϼ��� : ");  scanf("%d%d", &l.x, &l.y);
	printf("������ �ϴ��� ��ǥ�� �Է��ϼ��� : ");  scanf("%d%d", &r.x, &r.y);
	p->x = abs(r.x - l.x);
	p->y = abs(l.y - r.y);
	area = p->x * p->y;
	per = 2 * (p->x + p->y);

	printf("�簢���� ���̴� %d�̰�, �ѷ��� %d�Դϴ�.", area, per);

}