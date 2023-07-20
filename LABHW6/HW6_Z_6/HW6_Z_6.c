#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_word_in_word(char w1[], int start, char w2[])
{
	int i, j = 0, s;

	for (s = 0; w2[s] != '\0'; s++);
	for (i = start; w1[i] != '\0'; i++)
	{
		if (w1[i] == w2[j])
			j++;
		else if (w1[i] != w2[j])
			return 0;
		if (j == s)
			return 1;
	}

}

int main(void)
{
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));

}