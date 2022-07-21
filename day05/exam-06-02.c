#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num, absoulte;

	printf("정수 입력:");
	scanf("%d", &num);

	absoulte = num > 0 ? num : num * -1;
	printf("절댓값:%d", absoulte);

	return 0;
}