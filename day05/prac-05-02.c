#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num1;
	printf("숫자를 입력해주세요(27)");
	scanf("%d", &num1);

	printf("%d\n", num1 != 10); //num1 <(=)10
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);//num1 <=27
	
	printf("%d\n", num1 <= 30); //num1 !=30,<
	printf("%d\n", num1 <= 27);

	return 0;
}
