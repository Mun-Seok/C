#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1, num2, oper,result;
	printf("2���� �����Է�:");
	scanf("%d %d", &num1, &num2);
	printf("���� ����(1:���ϱ�,2:����)");
	scanf("%d", &oper);
	result = oper == 1 >0 ? num1 + num2 : num1 - num2;
	printf("���� ��: %d",result);

	return 0;

}