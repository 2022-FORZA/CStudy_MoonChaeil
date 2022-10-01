#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1, num2, q1, q2, d1, d2;
	scanf("%d %d", &num1, &num2);

	q1 = num1 / 4;
	d1 = num1 % 4;
	q2 = num2 / 4;
	d2 = num2 % 4;

	if (num1 % 4 == 0){
		q1 -= 1;
		d1 += 4;
	}

	if (num2 % 4 == 0) {
		q2 -= 1;
		d2 += 4;
	}

	printf("%d\n", abs(q1-q2) + abs(d1-d2));
}
