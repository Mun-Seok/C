#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int num1, num2;
	printf("2개의 정수를 space로 구분해 입력해주세요.");
	scanf("%d %d", &num1, &num2);

	num1 += 3;
	num2 *= 4;

	printf("num1+=3의 결과: %d\n", num1);
	printf("num2*4의 결과: %d\n", num2);

	return 0;
}