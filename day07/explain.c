#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	printf("���� �Է� ���ּ���: ");
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("0 ������ �� �Դϴ�.");
	}
	//if (num < 11) {
	if (num < 11 && num>1) {
		printf("1���� 10���� �� �Դϴ�.");
	}
	else if (num < 21) {//11<num<21
		printf("11���� 20���� �� �Դϴ�.");
	}
	else if (num < 31) {//21<num<31
		printf("21���� 30���� �� �Դϴ�.");
	}
	else {
		printf("31�̻� �� �Դϴ�.");
	}
	return 0;
}