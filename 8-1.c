#include <stdio.h>
#define MAX 20

int main() {
	struct person {
		char name[MAX];
		int age, height;
	} s;

	printf("정보입력: \n");
	printf("이름을 입력하세요: ");  scanf("%s", s.name);
	printf("나이를 입력하세요: "); scanf("%d",&s.age);
	printf("키를 입력하세요: ");  scanf("%d", &s.height);

	printf("프로필: \n");
	printf("이름: %s\n", s.name);
	printf("나이: %d\n", s.age);
	printf("키: %d\n", s.height);

}