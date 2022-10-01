#include <stdio.h>
#include <stdlib.h>

int main() {
	int* p;
	int i;

	p = (int*)malloc(4 * sizeof(int));
	for (i = 0; i < 4; ++i) { p[i] = (i+1)*100; printf("arr[%d] : %d \n", i, p[i]); }

	free(p);
}