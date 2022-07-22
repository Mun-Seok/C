#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//종합문제 1-1
//int main(void) {
//	int num1, num2;
//	printf("정수 2개를 입력해주세요.");
//	scanf("%d %d", &num1, &num2);
//	printf("%d && %d=%d\n", num1, num2, num1 && num2);//1
//	printf("%d || %d=%d\n", num1, num2, num1 || num2);//1
//	printf("%d & %d=%d\n", num1, num2, num1 & num2);//2
//	printf("%d | %d=%d", num1, num2, num1 | num2);//11
//	return 0;
//}
//종합문제 1-2
//int main(void) {
//	int num,oper,result;
//	printf("10진수 정수 입력:");
//	scanf("%d",&num);
//	printf("몇 진수로 입력할까요? 8진수는 1입력, 16진수는 2 입력:");
//	scanf("%d",&oper);
//	result= oper==1? printf("결과:%o",num):printf("결과:%x",num);
//
//	return 0;
//
//}
//종합문제 1-3
//int main(void) {
//	int peaches, basket;
//	printf("복숭아의 개수는:");
//	scanf("%d",&peaches);
//	basket=peaches%10==0? peaches/10:peaches/10+1;
//	printf("필요한 바구니의 수:%d", basket);
//	return 0;
//}
//종합문제 1-4
int main(void) {
	float fnum;
	printf("실수를 입력해주세요:");
	scanf("%f",&fnum);
	printf("%d", (int)fnum % 10);

	return 0;
}
//종합문제 1-5
//int main(void) {
//	int time, hour, minute, second;
//	printf("초를 입력하세요");
//	scanf("%d",&time);
//	hour = time / 3600;
//	minute = (time % 3600) / 60;
//	second = (time % 3600) % 60;
//	printf("%d시간 %d분 %d초", hour, minute, second);
//
//	return 0;
//}