#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, b;
	printf("������ �Է����ּ���.");
	scanf("%d", &a);

	b = a << 2;
	printf("%d<<2=%d\n", a, b);
	b = a >> 2;
	printf("%d>>2=%d\n", a, b);

	return 0;
}