#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Rev(int a) {
	int x, y, z, f;

	if (a >= 1000) { //4ÀÚ¸´¼ö
		f = a / 1000;
		a %= 1000;
		x = a / 100;
		a %= 100;
		y = a / 10;
		a %= 10;
		z = a;
		return 1000 * z + 100 * y + 10 * x + f;
	}

	else if (9 < a && a < 1000) { //3ÀÚ¸´¼ö
		x = a / 100;
		a %= 100;
		y = a / 10;
		a %= 10;
		z = a;
		printf("3\n");
		return 100 * z + 10 * y + x;
	}

	else
		return a;

}


int main() {
	int X, Y;
	scanf("%d %d", &X, &Y);

	printf("%d", Rev(Rev(X) + Rev(Y)));
}