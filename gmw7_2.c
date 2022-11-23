#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* get(int* a, char op[3], int* b) { //함수만들기.. 피연산자 2개 연산자 1개 받고 E는 종료조건
	if (strcmp(op, ">") == 0)
		return (*a > *b) ? "true" : "false";
	else if (strcmp(op, ">=") == 0)
		return (*a >= *b) ? "true" : "false";
	else if (strcmp(op, "<") == 0)
		return (*a < *b) ? "true" : "false";
	else if(strcmp(op, "<=") == 0)
		return (*a <= *b) ? "true" : "false";
	else if (strcmp(op, "==") == 0)
		return (*a == *b) ? "true" : "false";
	else if (strcmp(op, "!=") == 0)
		return (*a != *b) ? "true" : "false";
}

int main() {
	int a, b, i = 0;
	char op[3];
	
	while (1) {
		scanf("%d %s %d", &a, op, &b);
		if (strcmp(op, "E") == 0)
			break;
		printf("Case %d: %s\n", ++i, get(&a, op, &b));
	}

}