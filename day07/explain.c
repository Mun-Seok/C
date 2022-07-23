#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	printf("숫자 입력 해주세요: ");
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("0 이하의 값 입니다.");
	}
	//if (num < 11) {
	if (num < 11 && num>1) {
		printf("1부터 10사이 값 입니다.");
	}
	else if (num < 21) {//11<num<21
		printf("11부터 20사이 값 입니다.");
	}
	else if (num < 31) {//21<num<31
		printf("21부터 30사이 값 입니다.");
	}
	else {
		printf("31이상 값 입니다.");
	}
	return 0;
}