#include <stdio.h>
int main(void)
{
	int* px;
	char* pc;
	double* pd;

	int x[] = { 0, 0, 1, 2, 3 };
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;

	// 가)

	px = x;			// 주소
	pc = c;			// 주소
	pd = &f;		// 주소
	printf("가-1) %d %c %.1f\n", x[0], c[0], f);
	printf("가-2) %d %c %.1f\n", *px, *pc, *pd);

	// 나)
	*px = -1;
	printf("나) %d %c %.1f\n", x[0], c[0], f);

	// 다)
	for (i = 0; i < sizeof(x) / sizeof(int); i++)
		sum += x[i];
	printf("다) sum = %d\n", sum);	// sum의 값은 5이다.

	// 라)
	px = x;
	for (i = 0; i < sizeof(x) / sizeof(int); i++)
	{
		*px = 100;
		px++;		// 라-B)
	}

	// 마)
	pc = c;
	for (i = 0; i < sizeof(c) / sizeof(char); i++)
	{
		*pc = 'X';
		pc++;       // 마-B)
	}
}