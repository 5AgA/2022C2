#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply_num(int res)  //재귀함수
{
    //코드 작성
    if (res % 10 == 0)
        return 1 * multiply_num(res / 10);
    else if (res <= 9)
        return res;
    else
        return (res % 10) * multiply_num(res / 10);
}

int main()
{
    // 코드작성
    int a, b, c, multi;
    scanf("%d %d %d", &a, &b, &c);
    multi = a * b * c;
    if (multi % 10 == 0)
        while (multi % 10 != 0)
            multi /= 10;
    printf("%d", multiply_num(multi));
}