#include <stdio.h>
typedef struct square {
	int x;
	int y;
} s;


int main() {
	s l, r, z, * p;
	int area, per;
	p = &z;
	printf("왼쪽 상단의 좌표를 입력하세요 : ");  scanf("%d%d", &l.x, &l.y);
	printf("오른쪽 하단의 좌표를 입력하세요 : ");  scanf("%d%d", &r.x, &r.y);
	p->x = abs(r.x - l.x);
	p->y = abs(l.y - r.y);
	area = p->x * p->y;
	per = 2 * (p->x + p->y);

	printf("사각형의 넓이는 %d이고, 둘레는 %d입니다.", area, per);

}