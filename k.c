#include <stdio.h>
#include <string.h>
#define M 3
int main() {
	char* name[M];
	char stan[M];
	int num, i, k;

	scanf("%d", &num);
	scanf("%s", &stan);
	for (int i = 0; i < num; i++) scanf("%s", &name[i]);

	char* last;
	char* front = strtok_s(stan, "*", &last);

	printf("front = %s\n", front);
	printf("last = %s\n", last);

	char* a;
	strstr(name[0], last);
	printf("%s", strstr(name[0], last));

}