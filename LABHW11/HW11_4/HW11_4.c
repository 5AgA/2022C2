#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum season { �� = 1, ���� = 2, ���� = 3, �ܿ� = 4 };
int main(void)
{
	enum season s;

	printf("Input a season(1:Spring~ 4:Winter) : ");
	scanf("%d", &s);
	switch (s)
	{
	case ��:
		printf("���Դϴ�.\n");
		break;
	case ����:
		printf("�����Դϴ�.\n");
		break;
	case ����:
		printf("�����Դϴ�.\n");
		break;
	case �ܿ�:
		printf("�ܿ��Դϴ�.\n");
		break;
	}
}