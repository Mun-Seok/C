#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int num1, num2;
	printf("2���� ������ space�� ������ �Է����ּ���.");
	scanf("%d %d", &num1, &num2);

	num1 += 3;
	num2 *= 4;

	printf("num1+=3�� ���: %d\n", num1);
	printf("num2*4�� ���: %d\n", num2);

	return 0;
}