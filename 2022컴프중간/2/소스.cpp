#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	// �ڵ� �ۼ�
	if (n <= 0)
		return 0;
	else
		return (n % 10) + sum(n / 10);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));

}
