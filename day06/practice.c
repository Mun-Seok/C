#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//응용문제 1번
//int main(void) {
//	int age,cost;
//	printf("나이를 입력하세요:");
//	scanf("%d", &age);
//	cost = age > 20 ? 1250 : 800;
//	printf("당신의 나이는 %d세이며, 요금은 %d원입니다!",age,cost);
//}
//응용문제 2번
int main(void) {
	int age, height,able;
	char * result;
	printf("나이를 입력하세요:");
	scanf("%d", &age);

	printf("키를 입력하세요:");
	scanf("%d", &height);

	age >= 12 && height >= 120 ? printf("놀이기구를 탑승할 수 있습니다.") : printf("놀이기구를 탑승할 수 없습니다.");
	

	return 0;
}
//응용문제 3번
//int main(void) {
//	unsigned char num1 = 3; //3:0000 0011
//	unsigned char num2 = 24;//24:0001 1000
//
//	printf("%d\n", num1 << 3);//0001 1000
//	printf("%d\n", num2 >> 2);//0000 0011
//
//	return 0;
//}