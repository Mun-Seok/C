#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num, absoulte;

	printf("���� �Է�:");
	scanf("%d", &num);

	absoulte = num > 0 ? num : num * -1;
	printf("����:%d", absoulte);

	return 0;
}