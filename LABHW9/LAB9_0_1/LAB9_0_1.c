#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch;
	while (1)
	{
		 scanf("%c", &ch);	
		// ch = getchar(); abcd
		// ch = fgetc(stdin);
		// ch = _getch();
		// ch = _getche();
		if (ch == 'q') break;
		_putch(ch); // printf("%c", ch),	putchar(ch), fputc(ch, stdout)나 모두 같은 결과
	}
}