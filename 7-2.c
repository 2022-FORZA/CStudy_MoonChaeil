#include <stdio.h>
#include <string.h>
int main() {
	char pattern[101], filename[101]; // 패턴을 저장할 배열과 파일이름을 저장할 배열
	int n, plen; // 반복 횟수와 패턴 길이를 저장할 변수

	scanf("%d", &n);
	scanf("%s", pattern);
	plen = strlen(pattern);

	while (n--) {
		scanf("%s", filename);
		int star, flag = 1, flen = strlen(filename);
		// pattern에서 *의 위치 인덱스를 저장할 변수star
		// 문제 조건 충족여부 저장할 변수 flag(충족 1, 미충족 0)

		for (int i = 0; i < plen; i++) // * 위치 찾아 star에 저장
			if (pattern[i] == '*')
				star = i;

		for (int i = 0; i < flen && i < star; i++) { // 앞 부분 패턴 맞나 비교하는 for문
			if (filename[i] != pattern[i]) { // 틀리면
				flag = 0; // 미충족으로 바꾸고
				break; // 루프 탈출
			}
		}

		for (int i = 1; flag && (plen - i) > star; i++) { // 앞 패턴이 맞으면 패턴 뒷부분(*보다 큰 부분) 비교
			if ((flen - i) < star) flag = 0; // 남은 문자열이 패턴보다 모자라면 미충족
			if (filename[flen - i] != pattern[plen - i]) flag = 0; // 패턴문자가 다르면 미충족
		}
		// 위 for문에서 break를 쓰지 않는 이유 
		//: flag가 1(참)인 것이 for문의 실행 조건에 포함되어있으므로 flag를 break처럼 사용

		if (flag) printf("DA\n"); // 충족이면 DA출력
		else printf("NE\n"); // 미충족 NE 출력
	}
}