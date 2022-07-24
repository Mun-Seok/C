#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int  main(void) {
	//종합문제 1번
	/*int num = 101;
	while (num <200) {
		num++;
		if(num % 3 == 0&& num % 7 == 0)
			printf("%d ", num);
		else if (num%3==0) 
			printf("%d ",num);
		else if (num%7==0) 
			printf("%d ",num);
	}*/
	//종합문제 2번
	int dan, dan2,mul;
	printf("원하시는 단 2개를 입력해주세요:");
	scanf("%d %d", &dan, &dan2);
	if (dan < dan2) {
		while (dan <= dan2) {
			for (mul = 1; mul < 10; mul++) {
				printf("%d\t", dan * mul);
			}
			dan++;
			printf("\n");
		}
	}
	else {
		while (dan2 <= dan) {
			for (mul = 1; mul < 10; mul++) {
				printf("%d\t", dan2 * mul);
			}
			dan2++;
			printf("\n");
		}
	}

	//종합문제 3번
	//int num=10;

	//for (int i = 2; i < num; i++) {
	//	if(i%1==0 && i%i==0)
	//		printf("%d",i);
	//}

	//종합문제 4번
	/*int num1, num2;
	char oper;
	printf("피연산자 1:");
	scanf(" %d",&num1);

	printf("연산자:");
	scanf(" %c",&oper);

	printf("피연산자 2:");
	scanf(" %d", &num2);

	if (oper == '+' )
		printf("%d+%d=%d", num1, num2, num1 + num2);
	else if (oper == '-')
		printf("%d-%d=%d", num1, num2, num1 - num2);
	else if (oper == '*')
		printf("%d*%d=%d", num1, num2, num1 * num2);
	else if (oper == '/')
		printf("%d/%d=%d", num1, num2, num1 / num2);*/


	//종합문제 5번
	//int count;
	//int num1 = 0, num2 = 1, num3;
	//printf("정수의 개수를 입력해주세요:");
	//scanf("%d",&count);
	//
	//for (int i = 0; i < count; i++) {
	//	num3 = num1 + num2;
	//	num1 = num2;
	//	num2 = num3; 
	//	printf("%d ", num1);
	//}
	return 0;
	}