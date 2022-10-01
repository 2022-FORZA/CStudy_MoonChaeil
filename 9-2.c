#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* forza = fopen("forza.txt", "w+");
	if (forza == NULL) {
		puts("파일 열기 오류\n");
		exit(1);
	}
	else {
		puts("파일이 생성되었음\n");
		fclose(forza);
	}
	return 0;

}
