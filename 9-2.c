#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* forza = fopen("forza.txt", "w+");
	if (forza == NULL) {
		puts("���� ���� ����\n");
		exit(1);
	}
	else {
		puts("������ �����Ǿ���\n");
		fclose(forza);
	}
	return 0;

}
