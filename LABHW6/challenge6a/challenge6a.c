#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word1[81], word2[81];
	int i, s1, s2, cnt = 0;

	printf("Enter the first word: ");
	scanf("%s", word1);
	printf("Enter the second word: ");
	scanf("%s", word2);

	for (s1 = 0; word1[s1] != '\0'; s1++);
	for (s2 = 0; word2[s2] != '\0'; s2++);

	if (s1 != s2)
		printf("두 단어는 다르다\n");
	else
	{
		for (i = 0; i < s1; i++)
			if (word1[i] == word2[i])
				cnt++;
		if (cnt != s1)
			printf("두 단어는 다르다\n");
		else
			printf("두 단어는 같다\n");
	}

	return 0;
}