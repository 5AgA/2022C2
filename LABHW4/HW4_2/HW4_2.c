#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����): ");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%10d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	static int	b1 = 1, b2 = 1, b3 = 0;

	if (n == 0 || n == 1)
		return 1;
	else if (n > 1)
	{
		b3 = b1 + b2;
		b1 = b2;
		b2 = b3;

		return b3;
	}
}