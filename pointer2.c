#include <stdio.h>
int main() {
	int i = 5;
	int * pi = &i;
	int **ppi = &pi;

	printf("i=%d\n", i);
	printf("*pi=%d\n", *pi);
	printf("**ppi=%d\n", **ppi);
	printf("*ppi=%d\n", *ppi);
	printf("pi=%d\n", pi);
}