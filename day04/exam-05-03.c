#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int a, b;
	printf("2개의 정수를 space로 구분해 입력해주세요.");
	scanf("%d %d", &a, &b);
	printf("a==b:%d\n", a==b);
	printf("a>b:%d\n", a > b);
	printf("a<b:%d\n", a < b);
	printf("a>=b:%d\n", a >= b);
	printf("a<=b:%d\n", a <= b);
	printf("a!=b:%d\n", a != b);

	return 0;
}