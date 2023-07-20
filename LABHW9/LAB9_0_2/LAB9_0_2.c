#include <stdio.h>
#include <ctype.h>
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF)
	{
		putchar(c);		// 수동으로 에코
		c = getchar();
	}
}