#include <stdio.h>
#include <ctype.h>
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF)
	{
		if (isupper(c))
			printf("%c", tolower(c));
		else
			printf("%c", toupper(c));
		c = getchar();
	}
}