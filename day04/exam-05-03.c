#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int a, b;
	printf("2���� ������ space�� ������ �Է����ּ���.");
	scanf("%d %d", &a, &b);
	printf("a==b:%d\n", a==b);
	printf("a>b:%d\n", a > b);
	printf("a<b:%d\n", a < b);
	printf("a>=b:%d\n", a >= b);
	printf("a<=b:%d\n", a <= b);
	printf("a!=b:%d\n", a != b);

	return 0;
}