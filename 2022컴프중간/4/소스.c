#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char word[20];
	char* p;  //word�� ����ų ������ ����
	int i, j, temp;
	// �߰��� �迭 �����ϴ� ���� �ȵ� & ������ �߰� ����
	// �ڵ� �ۼ�
	scanf("%s", word);
	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] += 32;
		else if (word[i] >= 'a' && word[i] <= 'z')
			word[i] -= 32;
	}
	p = &word[i - 1];
	for (i = 0; word[i] != '\0'; i++)
	{
		if (*p >= 0 && *p <= 9)
			printf("%d", *p--);
		else
			printf("%c", *p--);
	}

}
