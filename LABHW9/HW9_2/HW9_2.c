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

	printf("�ֹε�Ϲ�ȣ �Է�('-'����):");
	gets_s(id, sizeof(id));
	strncpy(year, id, 2);
	fullYear = 1900 + atoi(year);
	back = strtok(id, "-");
	back = strtok(NULL, "\0");
	
	printf("����� %d�⵵ ���̱���\n", fullYear);
	if (*back == 49)
	{
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", fullYear + 77);
	}
	else if (*back == 50)
	{
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", fullYear + 84);
	}
}