#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &b, &c);
		d = b + c;
		printf("%d\n", d);
	}
}