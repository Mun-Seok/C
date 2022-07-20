#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2;
	printf("정수 두개를 입력해주세요:");
	scanf("%d %d", &num1, &num2);
	printf("%d+%d=%d\n", num1, num2, num1 + num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	printf("%d/%d=%d\n", num1, num2, num1 / num2);
	printf("%d%%%d=%d\n", num1, num2, num1 % num2);
	return 0;
}