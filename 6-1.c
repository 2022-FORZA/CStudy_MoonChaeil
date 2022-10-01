#include <stdio.h>
int main() {
	int x[5], i;	
	int*p=x;
	for (int i = 0; i < 5; i++)
		scanf("%d", x+i);
	for (int i = 0; i < 5; i++) {
		*(x + i) += 2;
		printf("arr[%d]=%d\n",i, *(x + i));
	}

}