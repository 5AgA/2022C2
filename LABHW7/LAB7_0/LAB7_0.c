#include <stdio.h>
int main(void)
{
	char c = 'A';		// 2byte
	int n = 100;        // 4byte
	double d = 3.14;	// 8byte

	char* pC;
	int* pN;
	double* pD;

	pC = &c;
	pN = &n;
	pD = &d;

	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;

	pC++;			// 2byte
	pN++;			// 4byte
	pD++;			// 8byte

	pC = pC + 2;		// 2*2
	pN = pN + 2;		// 2*4
	pD = pD + 2;		// 2*8

	return 0;
}