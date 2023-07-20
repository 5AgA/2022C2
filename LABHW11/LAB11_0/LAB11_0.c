#include <stdio.h>
int main(void)
{
	struct foo_t {
		int x;		//4byte
		int y;		//4byte
		char c;		//1byte
		char c2;	//1byte
	};
	struct foo_t data;
	struct foo_t* ptr = &data, * ptr2;
	ptr2 = ptr;
	ptr2++; // 주소값+sizeof(struct foo_t)만큼 증가됨 ➔ 12바이트.
	// 나)
	printf("sizeof data is = %d\n", sizeof(data)); //a)
	printf("data의 첫 주소값은 %d\n", &data); //b)
	printf("data.x 첫 주소값은 %d\n", &data.x); //c)
	printf("ptr이 가르키는 주소값은 %d\n", ptr); //d)
	printf("ptr2가 가르키는 주소값은 %d\n", ptr2);//e)
	return;
}