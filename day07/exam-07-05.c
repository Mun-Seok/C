#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2;
	printf("���� 2���� �Է����ּ���");
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