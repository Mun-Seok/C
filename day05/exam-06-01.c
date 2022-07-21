#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2;
	printf("숫자 2개를 입력해주세요.");
	scanf("%d %d", &num1, &num2);
	
	int result;
	result = 1 && 1;
	printf("result1: %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result2: %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("result3: %d\n", result);

	result = num1 > num2 || num1 == num2;
	printf("result3: %d\n", result);

	result = num1 < num2 || num1 == num2;
	printf("result3: %d\n", result);

	return 0;
}