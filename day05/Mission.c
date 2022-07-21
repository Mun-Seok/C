#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2, oper,result;
	printf("2개의 정수입력:");
	scanf("%d %d", &num1, &num2);
	printf("연산 선택(1:더하기,2:빼기)");
	scanf("%d", &oper);
	result = oper == 1 >0 ? num1 + num2 : num1 - num2;
	printf("연산 값: %d",result);

	return 0;

}