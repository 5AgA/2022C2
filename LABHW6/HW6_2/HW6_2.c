#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[81];
	int i, sum = 0;

	printf("Enter one word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 48 && str[i] <= 58)
			sum += (int)(str[i] - 48);
	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", sum);

	return 0;
}