#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, b;
	printf("���� 2���� �Է����ּ���:");
	scanf("%d %d", &a, &b);
	printf("3&5=%d\n", a & b);
	printf("3|5=%d\n", a | b);
	printf("3^5=%d\n", a ^ b);
	printf("~3=%d\n", ~a);
	
	return 0;
}