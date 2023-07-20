#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mergeString(char c[], char a[], char b[])
{
	int i, j = 0, tempt, minIndex, size;

	for (i = 0; a[i] != '\0'; i++)
		c[i] = a[i];
	for (; b[j] != '\0'; i++)
		c[i] = b[j++];
	c[i] = '\0';
	size = i;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i; j < size; j++)
			if (c[j] < c[minIndex])
				minIndex = j;
		tempt = c[i];
		c[i] = c[minIndex];
		c[minIndex] = tempt;
	}
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);

	return 0;
}