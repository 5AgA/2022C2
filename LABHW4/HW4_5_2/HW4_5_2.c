#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("\n����Ŭ�� ����: %d\n", get_cycle_number(n));
}

int get_cycle_number(int n) // �Ű������� ��������
{
	printf("%d ", n);

	if (n == 1)
		return 1;
	else if (n % 2 == 0)
		return 1 + get_cycle_number(n / 2);
	else
		return 1 + get_cycle_number(n * 3 + 1);
}