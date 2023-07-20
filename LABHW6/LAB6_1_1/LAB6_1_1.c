#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	char str[81];

	printf("Enter a string: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++);
	printf("±æÀÌ´Â %d\n", i);
	for (j = i - 1; j >= 0; j--)
		printf("%c\n", str[j]);

	return 0;
}