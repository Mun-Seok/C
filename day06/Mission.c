#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int oper;
	int num1, num2;
	float fnum1, fnum2;
	char a;
	printf("번호를 입력하세요.1번 실수, 2번 정수,3번 char,4번 형변환");
	scanf("%d",&oper);
	if (oper == 1) {
		printf("2개의 실수를 입력하세요.");
		scanf("%f %f", &fnum1, &fnum2);
		printf("%f+%f=%f", fnum1, fnum2, fnum1 + fnum2);
	}
	if (oper == 2) {
		printf("2개의 정수를 입력하세요.");
		scanf("%d %d", &num1, &num2);
		printf("%d+%d=%d", num1, num2, num1 + num2);
	}
	if (oper == 3) {
		printf("문자를 입력하세요.");
		scanf("%c", & a);
		scanf("%c", &a);
		printf("%c",a);
	}
	if (oper == 4) {
		printf("2개의 실수를 입력하세요.");
		scanf("%f %f", &fnum1, &fnum2);
		num1 = (int)fnum1;
		num2 = (int)fnum2;
		printf("실수1, 실수2 정수 변환:%d %d", num1, num2);
	}
	return 0;
}