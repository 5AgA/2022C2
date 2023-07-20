#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	char string[50];	// 입력되는 문자열을 저장
	char alphaString1[50];	// 입력문자열에서 알파벳만 저장
	char alphaString2[50];	// 대소문자를 바꿈
	char digitString[50];	
	char convertedString[50];	// 문자들과 숫자들로 재배열한 문자열
	int n = 0, m = 0, l = 0;

	printf("문자열을 입력하세요:");
	fgets(string, sizeof(string), stdin);
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (isalpha(string[i]) != 0)
			alphaString1[n++] = string[i];
		else if (isdigit(string[i]) != 0)
			digitString[m++] = string[i];
	}
	alphaString1[n] = '\0';
	digitString[m] = '\0';

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	for (int i = 0; alphaString1[i] != '\0'; i++)
	{
		if (isupper(alphaString1[i]) != 0)
			alphaString2[l++] = tolower(alphaString1[i]);
		else if (islower(alphaString1[i]) != 0)
			alphaString2[l++] = toupper(alphaString1[i]);
	}
	alphaString2[l] = '\0';
	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);
	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);

	return 0;
}