//후위 연산자 num++ 
//전위연산자 ++num
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, b;
	scanf("%d %d",&a,&b);

	printf("a:%d\n", a);
	printf("a:%d\n", ++a);
	printf("a:%d\n", a);

	printf("b:%d\n", b);
	printf("b:%d\n", b++);
	printf("b:%d\n", b);

	return 0;
}