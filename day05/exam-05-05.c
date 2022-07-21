#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int result = num1++ + num2 * 3;
	printf("연산 결과:%d\n", result);

	return 0;
}