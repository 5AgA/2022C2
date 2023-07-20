#include <stdio.h>
void main(void)
{
	int n[] = { -1, 1, 2, 3, 4 };
	int* p1 = n;
	int* p2 = p1;

	printf("%d\n", n[0]);
	printf("%d\n", (*p1)++);
	printf("%d\n", n[0]);
	printf("%d\n", *p2++);		// *(p2++)¿Í °°´Ù
	printf("%d\n", *p2);
	printf("%d\n", *++p1);
	printf("%d\n", *p1);

}