#include <stdio.h>
float sum_2(float a, float b);
float sum(float a, float b);

float g_i = 10.0;

int main(void)
{
	fprintf(stdout, "계산결과는 %f.\n", sum_2(10, 20));
	return 0;
}