#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	char string[50];	// �ԷµǴ� ���ڿ��� ����
	char alphaString1[50];	// �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50];	// ��ҹ��ڸ� �ٲ�
	char digitString[50];	
	char convertedString[50];	// ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
	int n = 0, m = 0, l = 0;

	printf("���ڿ��� �Է��ϼ���:");
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

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

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
	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);

	return 0;
}