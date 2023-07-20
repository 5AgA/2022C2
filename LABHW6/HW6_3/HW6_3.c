#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int cnt, i;

	printf("Enter one word: ");
	scanf("%s", word);

	for (cnt = 0; word[cnt] != '\0'; cnt++);
	newWord[cnt] = '\0';
	for (i = 0; i < cnt; i++)
		newWord[cnt - 1 - i] = word[i];

	printf("The reversed word is %s\n", newWord);
	return 0;
}