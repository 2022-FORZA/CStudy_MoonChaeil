#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char name[MAX][MAX];
	char stan[MAX];
	char *a,*k;
	char bac;
	int num,i,len; //lenstan 참조되지 않은 지역변수
	char* j=stan;

	scanf("%d", &num);
	scanf("%s", &stan);

	char fron = stan[0];

	for (i = 0; i < num; i++)
		scanf("%s", &name[i]);

	a=strchr(stan, '*');
	k = a - j; //k는 *의 위치, 수준다름
	bac = (*k + 1);

	for (i = 1; i < k; i++) //k는 int가 아니다
		fron = strcat(fron, stan[i]); //수준다름(char와 char*

	for (i = 0; i < num; i++) {
		len = strlen(name[i]); //데이터손실?
		char* m = name[i];
		if (m == strstr(name[i], fron)) //매개변수다름, 수준다름
		{
			char* n;
			n = strrstr(name[i], bac); //strrstr 정의안됨, 'extern은 int형을 반환하는것으로간주?'
			if (bac == *n) printf("DA");
			else printf("NE");
		}
		else
				printf("NE");
	
		
	
	}
	
	

	//아스키코드 이전값 strstr(stan, '*')+1
		//len 만들어서 처음~별위치이전/별이후~끝 나누어서 이름붙이기
	//짝맞추기할때 포인터 시작값=시작, 끝값 모양=끝값 이렇게

	

}