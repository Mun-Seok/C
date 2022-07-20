#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	float fnum;
	printf("값을 입력하세요:");
	scanf("%f" ,& fnum);
	int num = fnum;
	printf("입력값: %d\n", num);

	printf("입력값: %.0f\n", fnum);
	return 0;
}
