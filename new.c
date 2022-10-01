#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char name[MAX][MAX];
	char stan[MAX];
	char* a,*l;
	int num, i;
	char* s = stan;

	scanf("%d", &num);
	scanf("%s", &stan);

	for (i = 0; i < num; i++)
		scanf("%s", name[i]);

	a = strchr(stan,'*'); //별 위치 주소값
	char* f = strtok(stan, "*"); //별을 기준으로 앞 문자열 끊음(front)         front * last 이렇게 쓰려고
	//char fr = *f;

	char *last = (a + 1); //별 기준 뒤 문자열

	for (i = 0; i < num; i++) {
		char* p = name[i];
		l = strrchr(name[i], last); //뒤에서부터 name[i]에 last 들어있는지 확인
		if (strcmp(last,*l)==0) {
			if (strstr(name[i], *f) == &name[i]) //앞 문자열 검색
				printf("DA");
			else printf("NE");
		}
		else printf("NE");
	}
}