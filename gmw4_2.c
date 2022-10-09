#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cup[4], M, a, b, sp=1;
	cup[1] = 1, cup[2] = 2, cup[3] = 3;
	scanf("%d", &M);
	while (M--) {
		scanf("%d %d", &a, &b);
		if (a == sp)
			cup[1] = b, sp = b;
		//printf("case 1, sp = %d\n", sp);

		else
			if (b == sp)
				cup[1] = a, sp = a;
				//printf("case 2, sp = %d\n", sp);
	}

	printf("%d", cup[1]);

}