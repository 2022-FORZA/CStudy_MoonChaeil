#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(x,y) ((x)<(y)) ? (x) : (y)

int main() {
	int x, y, w, h, a, b, c;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	a = MIN(w - x, x);
	b = MIN(h - y, y);
	c = MIN(a, b);
	printf("%d\n", c);
}