#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char id[15];
	char year[3];
	char *back;
	int fullYear;

	printf("주민등록번호 입력('-'포함):");
	gets_s(id, sizeof(id));
	strncpy(year, id, 2);
	fullYear = 1900 + atoi(year);
	back = strtok(id, "-");
	back = strtok(NULL, "\0");
	
	printf("당신은 %d년도 생이군요\n", fullYear);
	if (*back == 49)
	{
		printf("남자분이시군요.\n");
		printf("평균 수명 77을 더하면 %d까지 산다고 계산됩니다.\n", fullYear + 77);
	}
	else if (*back == 50)
	{
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", fullYear + 84);
	}
}