#include <stdio.h>
#include <string.h>
#define MAX_LINE 80
///#define MAX_STR 3

int main() {
	int len, cnt = 0, sum = 0;
	char str[MAX_LINE];

	printf("문자열을 입력하시오\n");

	while ( gets_s(sizeof(str)) != NULL) {
		len = strlen(str);
		printf("문자열 길이: %d \n", len);
		sum += len;
		cnt++;
	}
	printf("전체 문자열 개수:            %d\n", cnt);
	printf("전체 문자열 길이의 합:   %d\n", sum);

	return 0;
}




