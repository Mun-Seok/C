#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("ȣ�� ����� �Է����ּ��� 1,2,3,4:");
	scanf("%d", &num);
	if (num == 1)
		printf("�����̾� ȸ���Դϴ�.\n");
	else if (num == 2)
		printf("��� ȸ���Դϴ�.\n");
	else if (num == 3)
		printf("�ǹ� ȸ���Դϴ�.\n");
	else if (num == 4)
		printf("�Ϲ� ȸ���Դϴ�.\n");
	switch(num)
	{
		case 1:
			printf("����Ʈ���� ��¥�Դϴ�~\n");
		case 2:
			printf("������ ��¥�Դϴ�~\n");
		case 3:
			printf("�������� ��¥�Դϴ�~\n");
		case 4:
			printf("Ŀ�ǰ� ��¥�Դϴ�~\n");
	}
	return 0;
}