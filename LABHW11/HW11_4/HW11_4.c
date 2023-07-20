#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum season { 봄 = 1, 여름 = 2, 가을 = 3, 겨울 = 4 };
int main(void)
{
	enum season s;

	printf("Input a season(1:Spring~ 4:Winter) : ");
	scanf("%d", &s);
	switch (s)
	{
	case 봄:
		printf("봄입니다.\n");
		break;
	case 여름:
		printf("여름입니다.\n");
		break;
	case 가을:
		printf("가을입니다.\n");
		break;
	case 겨울:
		printf("겨울입니다.\n");
		break;
	}
}