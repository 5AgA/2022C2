#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i = 0;

	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	for (; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			countA++;
		else if (str[i] == 'e' || str[i] == 'E')
		 	countE++;
		else if (str[i] == 'i' || str[i] == 'I')
		 	countI++;
		else if (str[i] == 'o' || str[i] == 'O')
		 	countO++;
		else if (str[i] == 'u' || str[i] == 'U')
			countU++;
	}
	printf("a or A: %d 개\n", countA);
	printf("e or E: %d 개\n", countE);
	printf("i or I: %d 개\n", countI);
	printf("o or O: %d 개\n", countO);
	printf("u or U: %d 개\n", countU);

	return 0;
}