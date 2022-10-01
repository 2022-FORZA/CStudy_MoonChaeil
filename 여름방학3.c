#include <stdio.h>
int main() {
	int song, I, right;
	scanf("%d %d", &song, &I);
	right = song * (I - 1)+1;
	printf("%d", right);
}