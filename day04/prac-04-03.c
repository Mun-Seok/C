#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	float fnum;
	printf("���� �Է��ϼ���:");
	scanf("%f" ,& fnum);
	int num = fnum;
	printf("�Է°�: %d\n", num);

	printf("�Է°�: %.0f\n", fnum);
	return 0;
}
