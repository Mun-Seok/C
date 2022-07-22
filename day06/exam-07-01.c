#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("정수를 입력하세요.");
	scanf("%d",&num);
	if (num < 3)
		printf("num is smaller than 3!");
	if (num == 3)
		printf("num is 3!");
	if (num > 3)
		printf("num is bigger than 3!");

	return 0;
}