#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//���չ��� 1-1
//int main(void) {
//	int num1, num2;
//	printf("���� 2���� �Է����ּ���.");
//	scanf("%d %d", &num1, &num2);
//	printf("%d && %d=%d\n", num1, num2, num1 && num2);//1
//	printf("%d || %d=%d\n", num1, num2, num1 || num2);//1
//	printf("%d & %d=%d\n", num1, num2, num1 & num2);//2
//	printf("%d | %d=%d", num1, num2, num1 | num2);//11
//	return 0;
//}
//���չ��� 1-2
//int main(void) {
//	int num,oper,result;
//	printf("10���� ���� �Է�:");
//	scanf("%d",&num);
//	printf("�� ������ �Է��ұ��? 8������ 1�Է�, 16������ 2 �Է�:");
//	scanf("%d",&oper);
//	result= oper==1? printf("���:%o",num):printf("���:%x",num);
//
//	return 0;
//
//}
//���չ��� 1-3
//int main(void) {
//	int peaches, basket;
//	printf("�������� ������:");
//	scanf("%d",&peaches);
//	basket=peaches%10==0? peaches/10:peaches/10+1;
//	printf("�ʿ��� �ٱ����� ��:%d", basket);
//	return 0;
//}
//���չ��� 1-4
int main(void) {
	float fnum;
	printf("�Ǽ��� �Է����ּ���:");
	scanf("%f",&fnum);
	printf("%d", (int)fnum % 10);

	return 0;
}
//���չ��� 1-5
//int main(void) {
//	int time, hour, minute, second;
//	printf("�ʸ� �Է��ϼ���");
//	scanf("%d",&time);
//	hour = time / 3600;
//	minute = (time % 3600) / 60;
//	second = (time % 3600) % 60;
//	printf("%d�ð� %d�� %d��", hour, minute, second);
//
//	return 0;
//}