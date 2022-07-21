#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("숫자를 입력해주세요.");
	scanf("%d", &num);
	num++;
	printf("num의 값:%d\n", num);
	printf("num++의 값:%d\n", num++);
	printf("num++된 다음의 값:%d\n", num);
	printf("전위형 num의 값:%d\n", ++num);

}