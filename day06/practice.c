#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//���빮�� 1��
//int main(void) {
//	int age,cost;
//	printf("���̸� �Է��ϼ���:");
//	scanf("%d", &age);
//	cost = age > 20 ? 1250 : 800;
//	printf("����� ���̴� %d���̸�, ����� %d���Դϴ�!",age,cost);
//}
//���빮�� 2��
int main(void) {
	int age, height,able;
	char * result;
	printf("���̸� �Է��ϼ���:");
	scanf("%d", &age);

	printf("Ű�� �Է��ϼ���:");
	scanf("%d", &height);

	age >= 12 && height >= 120 ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�.") : printf("���̱ⱸ�� ž���� �� �����ϴ�.");
	

	return 0;
}
//���빮�� 3��
//int main(void) {
//	unsigned char num1 = 3; //3:0000 0011
//	unsigned char num2 = 24;//24:0001 1000
//
//	printf("%d\n", num1 << 3);//0001 1000
//	printf("%d\n", num2 >> 2);//0000 0011
//
//	return 0;
//}