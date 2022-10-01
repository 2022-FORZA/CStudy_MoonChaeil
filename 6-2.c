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
	printf("세 자리 수를 입력하세요 : ");
	scanf("%d", p);
	a=num/ 100;
	b=(num %100)/10;
	c=(num % 100) % 10;
	if (a > c) {
		swap(&a, &c);
		fin = 100 * a + 10 * b + c;
		printf("%d(으)로 변경됨", fin);
	}
	else {
		printf("%d(으)로 변경되지 않음", num);
	}

}