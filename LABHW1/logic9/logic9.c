#include <stdio.h>
int main(void)
{
	int A[5] = { 10, 20, 30, 40, 50 };
	int R[5];

	for (int i = 0; i < 5; i++)
	{
		R[4 - i] = A[i];
	}
}