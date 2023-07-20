#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);



	return 0;
}

BOOL isPalindrome(char str[])
{
	int cnt, i;

	for (cnt = 0; str[cnt] != '\0'; cnt++);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != str[cnt - 1 - i])
			return FALSE;
	return TRUE;
}