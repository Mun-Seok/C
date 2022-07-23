#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2;
	printf("숫자 2개를 입력해주세요");
	scanf("%d %d", &num1, &num2);
	if (num2 > 5) {
		if (num1 == 5) {
			printf("The first if state!");
		}
	}

	if(num2<5){
		if (num1 == 5) {
			printf("The second if state!");
		}
	}
	return 0;
}