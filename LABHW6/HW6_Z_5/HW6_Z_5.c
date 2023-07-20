#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int checking(char w0[], char w[])
{
	int i, j = 0, s;

	for (s = 0; w0[s] != '\0'; s++);
	for (i = 0; w[i] != '\0'; i++)
	{
		if (w0[j] == w[i])
			j++;
		if (j == s)
			return 1;
	}
	return 0;
}
int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));

	return 0;
}