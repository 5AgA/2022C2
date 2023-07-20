#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculatePoint(char arr[]);
int main(void)
{
	char str[20];

	printf("단어를 입력하세요 (빈칸없이): ");
	scanf("%s", str);

	printf("점수는 %d\n", calculatePoint(str));
}
int calculatePoint(char arr[])
{
	int i, score = 0;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			score += (int)(arr[i] - 64);
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			score += (int)(arr[i] - 96);
	}
	return score;
}