#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("���ڸ� �Է����ּ���.");
	scanf("%d",&num);//10
	num++;

	printf("%d\n", num);//11
	printf("%d\n", num+3);//14
	printf("%d\n", ++num);//12
	printf("%d\n", num++);//12
	printf("%d\n", num);//13
	
	return 0;
}