#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("���ڸ� �Է����ּ���.");
	scanf("%d", &num);
	num++;
	printf("num�� ��:%d\n", num);
	printf("num++�� ��:%d\n", num++);
	printf("num++�� ������ ��:%d\n", num);
	printf("������ num�� ��:%d\n", ++num);

}