#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int oper;
	int num1, num2;
	float fnum1, fnum2;
	char a;
	printf("��ȣ�� �Է��ϼ���.1�� �Ǽ�, 2�� ����,3�� char,4�� ����ȯ");
	scanf("%d",&oper);
	if (oper == 1) {
		printf("2���� �Ǽ��� �Է��ϼ���.");
		scanf("%f %f", &fnum1, &fnum2);
		printf("%f+%f=%f", fnum1, fnum2, fnum1 + fnum2);
	}
	if (oper == 2) {
		printf("2���� ������ �Է��ϼ���.");
		scanf("%d %d", &num1, &num2);
		printf("%d+%d=%d", num1, num2, num1 + num2);
	}
	if (oper == 3) {
		printf("���ڸ� �Է��ϼ���.");
		scanf("%c", & a);
		scanf("%c", &a);
		printf("%c",a);
	}
	if (oper == 4) {
		printf("2���� �Ǽ��� �Է��ϼ���.");
		scanf("%f %f", &fnum1, &fnum2);
		num1 = (int)fnum1;
		num2 = (int)fnum2;
		printf("�Ǽ�1, �Ǽ�2 ���� ��ȯ:%d %d", num1, num2);
	}
	return 0;
}