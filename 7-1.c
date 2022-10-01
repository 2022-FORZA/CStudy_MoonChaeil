#include <stdio.h>
#include <string.h>
#define MAX 50

int main() {
	char name[MAX][MAX];
	int num,i,j;
	int len;
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		scanf("%s", &name[i]);

	len = strlen(name[0]);

	for (i = 1; i < num; i++) {
		for (j = 0; j < len; j++)
			(name[0][j] == name[i][j])? name[0][j] : (name[0][j]='?');
	}
	printf("%s", name[0]);

}