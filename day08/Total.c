#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int  main(void) {
	//���չ��� 1��
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
	//���չ��� 2��
	int dan, dan2,mul;
	printf("���Ͻô� �� 2���� �Է����ּ���:");
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

	//���չ��� 3��
	//int num=10;

	//for (int i = 2; i < num; i++) {
	//	if(i%1==0 && i%i==0)
	//		printf("%d",i);
	//}

	//���չ��� 4��
	/*int num1, num2;
	char oper;
	printf("�ǿ����� 1:");
	scanf(" %d",&num1);

	printf("������:");
	scanf(" %c",&oper);

	printf("�ǿ����� 2:");
	scanf(" %d", &num2);

	if (oper == '+' )
		printf("%d+%d=%d", num1, num2, num1 + num2);
	else if (oper == '-')
		printf("%d-%d=%d", num1, num2, num1 - num2);
	else if (oper == '*')
		printf("%d*%d=%d", num1, num2, num1 * num2);
	else if (oper == '/')
		printf("%d/%d=%d", num1, num2, num1 / num2);*/


	//���չ��� 5��
	//int count;
	//int num1 = 0, num2 = 1, num3;
	//printf("������ ������ �Է����ּ���:");
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